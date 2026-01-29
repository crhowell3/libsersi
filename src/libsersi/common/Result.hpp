#pragma once

#include <stdexcept>
#include <utility>
#include <variant>

#define TRY(expr)                                                                          \
  do {                                                                                     \
    auto _res = (expr);                                                                    \
    if (!_res) return Result<void, typename decltype(_res)::error_type>::Err(*_res.err()); \
  } while (false)

template <typename T, typename E>
class Result {
 public:
  using value_type = T;
  using error_type = E;

  explicit operator bool() const noexcept { return is_ok(); }

  static Result Ok(T value) { return Result(std::move(value)); }
  static Result Err(E error) { return Result(std::move(error), err_tag{}); }

  [[nodiscard]] bool is_ok() const noexcept { return std::holds_alternative<T>(data_); }

  [[nodiscard]] bool is_err() const noexcept { return std::holds_alternative<E>(data_); }

  const T& unwrap() const {
    if (is_err()) {
      throw std::logic_error("Called unwrap() on Err");
    }
    return std::get<T>(data_);
  }

  const E& unwrap_err() const {
    if (is_ok()) {
      throw std::logic_error("Called unwrap_err() on Ok");
    }
    return std::get<E>(data_);
  }

  const T* ok() const noexcept { return std::get_if<T>(&data_); }

  const E* err() const noexcept { return std::get_if<E>(&data_); }

 private:
  struct err_tag {};

  explicit Result(T value) : data_(std::move(value)) {}

  Result(E error, [[maybe_unused]] err_tag et) : data_(std::move(error)) {}

  std::variant<T, E> data_;
};

template <typename E>
class [[nodiscard]] Result<void, E> {
 public:
  using error_type = E;

  explicit operator bool() const noexcept { return is_ok(); }

  // Factory helpers
  static Result Ok() { return Result(ok_tag{}); }

  static Result Err(E error) { return Result(std::move(error)); }

  // Observers
  [[nodiscard]] bool is_ok() const noexcept { return std::holds_alternative<ok_tag>(data_); }

  [[nodiscard]] bool is_err() const noexcept { return std::holds_alternative<E>(data_); }

  // Checked accessors
  void unwrap() const {
    if (is_err()) {
      throw std::logic_error("Called unwrap() on Err");
    }
  }

  const E& unwrap_err() const {
    if (is_ok()) {
      throw std::logic_error("Called unwrap_err() on Ok");
    }
    return std::get<E>(data_);
  }

  // Optional-style accessors
  [[nodiscard]] bool ok() const noexcept { return is_ok(); }

  const E* err() const noexcept { return std::get_if<E>(&data_); }

 private:
  struct ok_tag {};

  explicit Result(ok_tag) : data_(ok_tag{}) {}  // NOLINT

  explicit Result(E error) : data_(std::move(error)) {}

  std::variant<ok_tag, E> data_;
};

#ifndef LIBSERSI_UTILS_ENDIAN_H_
#define LIBSERSI_UTILS_ENDIAN_H_

namespace dis {
/// the order of bytes that are on the left
enum Endian {
  kLittle = 1,
  kBig = 0,
};

}  // namespace dis

#endif  // LIBSERSI_UTILS_ENDIAN_H_

#ifndef LIBDIS6_UTILS_ENDIAN_H_
#define LIBDIS6_UTILS_ENDIAN_H_

namespace dis {
/// the order of bytes that are on the left
enum Endian {
  kLittle = 1,
  kBig = 0,
};

}  // namespace dis

#endif  // LIBDIS6_UTILS_ENDIAN_H_

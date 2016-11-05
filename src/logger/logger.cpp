#include "logger.h"

void
print_version(int major, int minor) {
  std::cout << "--------------------------------" << std::endl
    << "Version of binary file: "
    << major << "." << minor << std::endl
    << "--------------------------------" << std::endl;
}

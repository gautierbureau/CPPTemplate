#include <iostream>
#include "Foo.h"
#include "Library.h"

int main() {
  Library library;
  std::cout << library.hello() << std::endl;

  Foo foo;
  std::cout << foo.value() << std::endl;
  return 0;
}

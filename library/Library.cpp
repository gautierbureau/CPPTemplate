//
// Created by bureaugau on 25/11/2021.
//

#include "Library.h"

std::string Library::hello() {
  static const std::string hello{"hello"};
  return hello;
}

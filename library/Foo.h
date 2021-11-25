//
// Created by bureaugau on 25/11/2021.
//

#ifndef TEMPLATE_FOO_H
#define TEMPLATE_FOO_H


#include <ostream>

class Foo final {

 public:
  Foo() = default;

  ~Foo() = default;

  Foo(const Foo& foo) = delete;

  Foo(Foo&& foo) = delete;

  Foo& operator=(const Foo& foo) = delete;

  Foo& operator=(Foo& foo) = delete;

  unsigned int value() const;

};


#endif //TEMPLATE_FOO_H

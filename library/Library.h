//
// Created by bureaugau on 25/11/2021.
//

#ifndef TEMPLATE_LIBRARY_H
#define TEMPLATE_LIBRARY_H

#include <string>

class Library {
 public:
  Library() = default;

  ~Library() = default;

  Library(const Library& library) = delete;

  Library& operator=(const Library& library) = delete;

  Library(Library&& library) = delete;

  Library& operator=(Library&& library) = delete;

  std::string hello();
};

#endif //TEMPLATE_LIBRARY_H

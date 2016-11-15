/**
 * common.hpp to define some common macro
 */
#include <iostream>

#ifndef _ELEPHANT_COMMON_HPP
#define _ELEPHANT_COMMON_HPP

#define VERSION 0.1

// Disallow the copy and assign memeber functions
// make the ClassName to be unique one
#define DISALLOW_COPY_AND_ASSIGN(ClassName)         \
  ClassName(const ClassName &);                     \
  ClassName& operator= (const ClassName &)


#endif

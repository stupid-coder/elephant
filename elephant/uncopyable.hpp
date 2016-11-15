/**
 * uncopyable class to disallow copy and assign the class
 */

#ifndef _ELEPHANT_UNCOPYABLE_H
#define _ELEPHANT_UNCOPYABLE_H

#include "elephant/common.hpp"

namespace elephant
{
  class Uncopyable
  {
  public:
    Uncopyable() {}
    ~Uncopyable() {}
  private:
    DISALLOW_COPY_AND_ASSIGN(Uncopyable);
  };

}

#endif  // for _ELEPHANT_UNCOPYABLE_H

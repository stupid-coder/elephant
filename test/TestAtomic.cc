#include <iostream>
#include "elephant/atomic.hpp"

int main()
{
  AtomicInt sum = 0;
  AtomicIncream(&sum);
  std::cout << sum << std::endl;
	return 0;
}

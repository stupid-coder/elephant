#include "elephant/singleton.hpp"
#include <iostream>


class test : public elephant::Singleton<test>
{
private:

  test()
  {
    std::cout << "test construct..." << std::endl;
  }

  ~test()
  {
    std::cout << "test delete... " << std::endl;
  }

  SINGLETON_FRIEND(test);
};

int main(int argc, char *argv[])
{
  test& t1 = test::instance();
  test& t2 = test::instance();
  return 0;
}

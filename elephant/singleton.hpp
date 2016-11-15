/**
 * singleton
 */

#ifndef _ELEPHANT_SINGLETON_H
#define _ELEPHANT_SINGLETON_H

#include "elephant/uncopyable.hpp"

#define SINGLETON_FRIEND(type) friend class ::elephant::Singleton<type>

namespace elephant
{

  template <typename T>
  class Singleton : private Uncopyable
  {
  private:
    // Template Create Helper to Make sure the init before the main
    class CreateHelper
    {
    public:
      CreateHelper() { Singleton<T>::instance(); }
      inline void help_template() const {}
    };
    static CreateHelper create_helper_;

  public:
    static T& instance()
    {
      static T instance_;

      create_helper_.help_template();

      return instance_;
    }

  protected:
    Singleton() {}
    ~Singleton() {}
  };
  template <typename T> typename Singleton<T>::CreateHelper Singleton<T>::create_helper_;
}

#endif  // for _ELEPHANT_SINGLETON_H

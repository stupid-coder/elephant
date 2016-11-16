#ifndef _ELEPHANT_ATOMIC_H
#define _ELEPHANT_ATOMIC_H

// Some macro test to be added...
// Now just greater than gcc-4.1
// CAS: https://gcc.gnu.org/onlinedocs/gcc-4.1.1/gcc/Atomic-Builtins.html

#if __GNUC__

# define BCompareAndSwap(ptr,oval,nval) __sync_bool_compare_and_swap(ptr,oval,nval)

# define VCompareAndSwap(ptr,oval,nval) __sync_val_compare_and_swap(ptr,oval,naval)

# define MemeryBarrier(...) __sync_synchronize(__VA_ARGS__)

# define AtomicInt int

# define AtomicAddAndFetch(ptr,value) __sync_add_and_fetch(ptr,value);

# define AtomicIncream(ptr) AtomicAddAndFetch(ptr,1);
# else
# error "there no atomic operation"
#endif  // for __GNUC__

#endif  // for _ELEPHANT_ATOMIC_H

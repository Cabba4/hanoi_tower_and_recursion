#include <stdio.h>
#include<iostream>

using namespace std;

int
gcd (int x, int y)
{
  if (y == 0)
    {
      return x;
    }
  return gcd (y, x % y);
}

int
gcd2 (int x, int y)
{
  if (x == 0)
    return y;
  else if (y == 0)
    return x;
  while (x != y)
    {
      if (x > y)
	x = x - y;
      else
	y = y - x;
    }
  return x;
}

int
main ()
{
  int a = 98, b = 56;
  cout << "GCD is " << gcd2 (a, b) << endl;
}


/* Using euclidean algorithm is a good idea with numbers which are close to each other as it is pretty fast. The non-recursive method is the easiest but it becomes slower with bigger numbers, the recursive
method is good but it is slower than iteration as always, also for euclidean algorithm if the numbers are successive values of a fibonacci series then the quotient in every step except for the last one is 1.



*/
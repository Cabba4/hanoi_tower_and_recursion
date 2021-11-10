#include <iostream>

using namespace std;

int gcd (int x, int y)
{
  int big, small;
  //cout<<"here"<<endl;
  int gcd;
  if (x > y)
    {
      big = x;
      small = y;
    }
  else
    {
      big = y;
      small = x;
    }
  for (int i = 1; i =< small; i++)
    {
      if (big % i == 0 && small % i == 0)
	gcd = i;
    }
    
    cout<<gcd<<endl;
    return gcd;
}


int main ()
{
  int x, y;
  cout << "Enter two numbers" << endl;
  cin >> x >> y;
  cout << "Result = " << gcd (x, y) << endl;

}


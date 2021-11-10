// fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "timer.h"

using namespace std;

int counter = 0;
Timer t;

int fibonacci_recur(int n)
/*    fibonacci: recursive version
Pre:  The parameter n is a nonnegative integer.
Post: The function returns the nth Fibonacci number.
*/
{
    counter++;
    if (n <= 0)  return 0;
    else if (n == 1)  return 1;
    else              
        return fibonacci_recur(n - 1) + fibonacci_recur(n - 2);
}


int fibonacci_iter(int n)
/*    fibonacci: iterative version
Pre:  The parameter n is a nonnegative integer.
Post: The function returns the nth Fibonacci number.
*/
{
    int last_but_one;   //  second previous Fibonacci number, F_i-2
    int last_value;     //  previous Fibonacci number, F_i-1
    int current;        //  current Fibonacci number F_i
    if (n <= 0) return 0;
    else if (n == 1) return 1;
    else {
        last_but_one = 0;
        last_value = 1;
        for (int i = 2; i <= n; i++) {
            current = last_but_one + last_value;
            last_but_one = last_value;
            last_value = current;
            counter++;
        }
        return current;
    }
}


int main()
{
    int num;
    double time;
    cout << "Enter value to see nth Fibonacci number" << endl;
    cin >> num;
    t.reset();
    cout << "Using Recur function" << endl << fibonacci_recur(num) << endl;
    t.elapsed_time();
    cout << "Function ran " << counter << " times" << " and for " << t.elapsed_time() << " seconds" << endl;
    counter = 0;
    cout << endl << "Now with iteration function" << endl;
    Timer y;
    cout << fibonacci_iter(num) << endl;
    y.elapsed_time();
    cout << "Function ran " << counter << " times" << " and for " << y.elapsed_time() << " seconds" << endl;
}


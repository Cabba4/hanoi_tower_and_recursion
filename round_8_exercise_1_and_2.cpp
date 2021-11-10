// recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int recur_1(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return recur_1(n/2);
    }
    else if (n % 2 == 1)
    {
        return 1 + recur_1(n - 1);
    }
}

int recur_2(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else if (n % 2 == 0 && n > 1)
    {
        return n + recur_2(n / 2);
    }
    else if (n % 2 == 1 && n > 1)
    {
        return recur_2((n + 1) / 2) + recur_2((n - 1) / 2);
    }
}

int main()
{
    std::cout << "Exercise 1";
    cout << endl <<"n = 1 output = " << recur_1(1);
    cout << endl <<"n = 2 output = " << recur_1(2);
    cout << endl <<"n = 3 output = " << recur_1(3);
    cout << endl <<"n = 99 output = " << recur_1(99);
    cout << endl <<"n = 100 output = " << recur_1(100);
    cout << endl <<"n = 128 output = " << recur_1(128);

    std::cout << endl << endl << "Exercise 2";
    cout << endl << "n = 1 output = " << recur_2(1);
    cout << endl << "n = 2 output = " << recur_2(2);
    cout << endl << "n = 3 output = " << recur_2(3);
    cout << endl << "n = 4 output = " << recur_2(4);
    cout << endl << "n = 5 output = " << recur_2(5);
    cout << endl << "n = 6 output = " << recur_2(6);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

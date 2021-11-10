// recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TIMER.h"

using namespace std;


int disks = 3;  // Make this constant much smaller to run program.
void move(int count, int start, int finish, int temp);
Timer t;
int tim;

void move(int count, int start, int finish, int temp)
{
    if (count > 0) {
        move(count - 1, start, temp, finish);
        //cout << "Move disk " << count << " from " << start
          //  << " to " << finish << "." << endl;
        move(count - 1, temp, finish, start);
    }
    
    //cout << time << endl;
}


int main()
{
    
    int disk[5] = { 20, 21, 22, 23, 24 };
    //float time;
    for (int i = 0; i < 5; i++)
    {
        cout << "Number of disks is "<<disk[i] << endl;
        t.reset();
        move(disk[i], 1, 3, 2);
        t.elapsed_time();
        cout << t.elapsed_time() << endl;
    }

    //The time doubles for successsive values of the disk!
   
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

// tower_of_hanoi_interation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TIMER.h"
using namespace std;

Timer t;

void move(int count, int start, int finish, int temp)
/*    move: iterative version
Pre:  Disk count is a valid disk to be moved.
Post: Moves count disks from start to finish using temp for temporary
      storage.
*/
{
    int swap;            //  temporary storage to swap towers
    while (count > 0) {  //  Replace the if statement with a loop.
        move(count - 1, start, temp, finish);  //  first recursive call
       // cout << "Move disk " << count << " from " << start
       //     << " to " << finish << "." << endl;
        count--;  //  Change parameters to mimic the second recursive call.
        swap = start;
        start = temp;
        temp = swap;
    }
}


int main()
{
    int disk[5] = { 20, 21, 22, 23, 24 };

    for (int i = 0; i < 5; i++)
    {
        cout << "Number of disks is " << disk[i] << endl;
        t.reset();
        move(disk[i], 1, 2, 3); //  Move 1 disk from tower 1 to 2 (using tower 3).
        t.elapsed_time();
        cout << t.elapsed_time() << endl;
    }
   
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

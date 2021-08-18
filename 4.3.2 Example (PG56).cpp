#include <iostream>
using namespace std;
#include "Binary.h"
void main()
{
    int target, no, i = 0;
    bool found;
    Binary BS;
    cout << "The Data\n";
    /*generate an ordered random number list*/
    BS.array[0] = 1;
    no = rand() % 500 + 1;
    while (i < SIZE)
    {
        if (no >= BS.array[i - 1])
        {
            BS.array[i] = no;
            i++;
        }
        no = rand() % 500 + 1;
    }
    for (i = 0; i < SIZE; i++)
        cout << BS.array[i] << " ";
    cout << endl;
    cout << "Insert a target, or 0 to stop: ";
    cin >> target;
    do
    {

        found = BS.BinarySearch(BS.array, SIZE, target,
            BS.locationWanted);
        if (found)
            cout << "\n\tFound " << target << " at index " <<
            BS.locationWanted << endl;
        else
            cout << "\n\tTarget not found" << endl;
        cout << "\nInsert a target, or 0 to stop: ";
        cin >> target;
    } while (target != 0);
}

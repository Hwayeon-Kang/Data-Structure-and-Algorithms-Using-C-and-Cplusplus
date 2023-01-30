#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int A[10] = {2, 4, 6, 8, 10, 12};

    for (int x : A)
    /*in C++, you can display an array using 'for each loop' as an alternative of for loop to access all the elments

    x takes all the elements of the array one by one; 2,4,6,...

    x will take the number of elements depending on the size of an array
    */
    {
        cout << x << endl;
        /*print all the elements*/
    }

    return 0;
}
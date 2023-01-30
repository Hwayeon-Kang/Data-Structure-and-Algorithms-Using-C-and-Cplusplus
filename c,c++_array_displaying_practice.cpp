#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    /*display an array by for loop*/
    int A[10] = {2, 4, 6, 8, 10, 12};
    /* you can give a constant value as the size of an array*/
    for (int i = 0; i < 10; i++)
    /*for loop is used for accessing all the elements in an array*/
    {
        cout << A[i] << endl;
        /*print all the elements*/
    }

    /*in C++, you can use 'for each loop' as an alternative of for loop to access all the elments*/

    return 0;
}
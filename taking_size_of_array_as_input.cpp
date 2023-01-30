#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    /*take the size of array as input
    I want to take the input from the user that is size of an array,
    then I am reading the size,
    then creating an array of size n
    */
    int n;
    cout << "Enter Size";
    cin >> n;

    int A[n];
    /*in C, A of n; A[n] is called variable sized array
    you can create the array, but cannot initialize it

    ex. int A[n] = {2,4,6,8,10} is not allowed
        int A[n]; is allowed

    so you should use indices by writing down or using loop
    */
    A[0] = 2;

    for (int x : A)
    {
        cout << x << endl;
        /*print all the elements*/
    }

    return 0;
}
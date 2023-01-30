#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    /*initializing the array A*/

    /*you can skip the size of array like
    int A[]={2, 4, 6, 8, 10}
    but still array size is 5
   */

    cout << sizeof(A) << endl;
    cout << A[1] << endl;
    printf("%d\n", A[2]);

    int B[10] = {2, 4, 6, 8, 10, 12, 14};
    /*values in empty location will be zero*/

    cout << B[8] << endl;
    printf("%d\n", B[9]);

    return 0;
}
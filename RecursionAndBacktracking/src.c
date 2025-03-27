#include <stdio.h>

// Problem 1: Towers of Hanoi
void towers_of_hanoi(int n, char frompeg, char topeg, char auzpeg)
{
    /* if only 1 disk, make the move and return */
    if (n == 1)
    {
        printf("Move disk 1 from peg %c to peg %c\n", frompeg, topeg);
        return;
    }
    /* Move top n - 1 disks from A to B, using C as auciliary*/
    towers_of_hanoi(n - 1, frompeg, auzpeg, topeg);

    /* Move remaining dishs from A to C*/
    printf("Move disk %d from peg %c to peg %c\n", n, frompeg, topeg);

    /* Move n - 1 disks from B to C using A as auxiliary*/
    towers_of_hanoi(n - 1, auzpeg, topeg, frompeg);
}

// Problem 2: Check the array is in sorted order with recursion
int is_array_sorted(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }

    return (arr[n - 1] < arr[n - 2]) ? 0 : is_array_sorted(arr, n - 1);
}


// Problem 3: Generate all the strings of n bits.
char A[1000];

void binary(int n)
{
    if (n < 1)
    {
        printf("%s\n", A);
    }
    else
    {
        A[n - 1] = '0';
        binary(n - 1);
        A[n - 1] = '1';
        binary(n - 1);
    }
}

// Problem 4: Generate all the strings of length n drawn from 0...k-1
char A[1000];
void k_string(int n, int k)
{
    if ( n < 1 )
    {
        printf("%s\n", A);
    }
    else
    {
        for (int j = 0; j < k; j++)
        {
            A[n - 1] = j;
            k_string(n - 1, k);
        }
    }
}

int main(int argc, char const *argv[])
{
    /* // towers of hanoi
    int n = 5; // Number of disks
    towers_of_hanoi(n, 'A', 'C', 'B'); // A, B and C are the name of rods
    
    // check array sorted
    int arr[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    printf("Array is sorted: %d\n", is_array_sorted(arr, n1));
 */
    
    
    // // Generate all the strings of n bits
    // int n = 3;
    // binary(n);

    // getchar();

    // Generate all the strings of length n drawn from 0...k-1
    int n = 3;
    int k = 2;
    k_string(n, k);
    return 0;
}
/*
write a program that where you have to find the sum of Even odd
For example -:
Input: array = 1,2,3,4,5,6,7
Output : array = 12 16
*/
#include <stdio.h>

// Function to find the sum of even and odd-indexed elements
void EvenOddSum(int arr[], int n, int result[])
{
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }

    result[0] = oddSum;
    result[1] = evenSum;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result[2]; // Array to store even and odd sums
    EvenOddSum(arr, n, result);

    printf("Result = %d %d\n", result[0], result[1]);
    return 0;
}

/*
Write a program that find the minimum and maximum numbers among those elements
For example -:
Input: array =  3,1,4,6,2,7
Output: 1,7
*/
#include <stdio.h>

// Function to find the minimum and maximum elements
void findMinMax(int arr[], int n)
{
    int minElement = arr[0];
    int maxElement = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    printf("Output = %d %d\n", minElement, maxElement);
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

    findMinMax(arr, n);

    return 0;
}
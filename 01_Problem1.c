/*
write a program that takes an array and Find the most frequent element in it. if there are multiple element maximum number of times, print any of them
For example :-
Input: array = [1,3,2,1,4,1]
output: 1 appears three times in array.
*/
#include <stdio.h>

// Function to find the most frequent element in an array
int findMostFrequent(int arr[], int n, int *count)
{
    int maxCount = 0;          // To store the maximum frequency
    int mostFrequent = arr[0]; // To store the most frequent element

    for (int i = 0; i < n; i++)
    {
        int currCount = 1; // Initialize count for the current element

        // Count the occurrences of arr[i] in the remaining elements
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                currCount++;
            }
        }

        // Update maxCount and mostFrequent if needed
        if (currCount > maxCount)
        {
            maxCount = currCount;
            mostFrequent = arr[i];
        }
    }

    *count = maxCount; // Store the count in the provided pointer
    return mostFrequent;
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

    int count;
    int result = findMostFrequent(arr, n, &count);
    printf("%d appears %d times in the array.\n", result, count);
    return 0;
}
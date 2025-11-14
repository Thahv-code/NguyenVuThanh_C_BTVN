#include <stdio.h>

int findMostFrequent(int arr[], int n, int *count)
{
    int maxCount = 0;
    int mostFrequent = arr[0];

    for (int i = 0; i < n; i++)
    {
        int tempCount = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                tempCount++;
            }
        }

        if (tempCount > maxCount)
        {
            maxCount = tempCount;
            mostFrequent = arr[i];
        }
    }

    *count = maxCount;   
    return mostFrequent; 
}
int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count;

    int result = findMostFrequent(arr, n, &count);
    printf("xuat hien nhieu nhat %d voi %d lan.\n", result, count);

    return 0;
}
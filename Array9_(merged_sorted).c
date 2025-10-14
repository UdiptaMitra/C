/*WAPC to input two integer arrays from the user.
 Merge these two arrays into a single sorted array.*/

#include <stdio.h>

int main()
{
    int i, j, temp, n1, n2, min_index;

    printf("\nArray 1");
    printf("\nEnter the total number of elements to be stored in the array: ");
    scanf("%d", &n1);

    int arr1[n1];
    for (i = 0; i < n1; ++i)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nArray 2");
    printf("\nEnter the total number of elements to be stored in the array: ");
    scanf("%d", &n2);

    int arr2[n2];
    for (i = 0; i < n2; ++i)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int arr3[n1 + n2], copy[n1 + n2];

    // merge
    for (i = 0; i < n1; ++i)
        arr3[i] = arr1[i];
    for (i = 0; i < n2; ++i)
        arr3[i + n1] = arr2[i];

    // make a copy before sorting
    for (i = 0; i < n1 + n2; ++i)
        copy[i] = arr3[i];

    // selection sort
    for (i = 0; i < (n1 + n2 - 1); ++i)
    {
        min_index = i;
        for (j = i + 1; j < (n1 + n2); ++j)
        {
            if (arr3[j] < arr3[min_index])
                min_index = j;
        }

        // swap
        temp = arr3[i];
        arr3[i] = arr3[min_index];
        arr3[min_index] = temp;
    }

    // display
    printf("\nOriginal concatenated array: ");
    for (i = 0; i < n1 + n2; ++i)
        printf("%d ", copy[i]);

    printf("\nSorted merged array: ");
    for (i = 0; i < n1 + n2; ++i)
        printf("%d ", arr3[i]);

    printf("\n");
    return 0;
}

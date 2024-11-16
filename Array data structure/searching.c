#include <stdio.h>
void display(int arr[], int size)
{

    printf("Value of array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
// int linearSearch(int arr[], int size, int index, int capacity, int element)
// {
//     if (size <= -1)
//     {
//         printf("array is empty there is no element for searching\n");
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             printf("element is present at index %d and that element is %d\n", i, arr[i]);
//         }
//     }
//     printf("element is not present\n");
//     return 1;
// }
int binerySearch(int arr[], int size, int element, int low, int high)
{
    // while (low <= high)
    for(int i=0;i<size;i++)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            printf("element is found and element is %d\n", arr[mid]);
            return 1;

        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
    }
    printf("element is not found\n");
    return -1;
}
int main()
{
    // int arr[100] = {7, 8, 12, 27, 88}, size = 5, element = 45, index = 3, capacity = 100;
    // int arr[100] = {7, 8, 12, 27, 88}, size = 5, index = 4, capacity = 100, element = 88;
    int arr[100] = {1, 3, 6, 7, 88}, size = 5, index = 0, capacity = 100, element = 88, low = 0, high = size - 1;
    display(arr, size);
    if (index <= -1)
    {
        printf("searching is not done\n");
    }
    else
    {
        printf("searching is done\n");
        // linearSearch(arr, size, index, 100, element);
        binerySearch(arr, size, element, low, high);
        display(arr, size);
    }
    return 0;
}
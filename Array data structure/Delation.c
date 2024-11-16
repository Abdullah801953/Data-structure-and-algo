#include <stdio.h>
int count = 0;
void display(int arr[], int size)
{

    printf("Value of array is\n");
    for (int i = 0; i < size; i++)
    {
        count = count + 1;
        printf("%d\n", arr[i]);
    }
}
int deletion(int arr[], int size, int element, int index, int capacity)
{
    if (size <= -1)
    {
        printf("array is empty there is no element for deletion\n");
    }
    for (int i = index; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return 1;
}
int main()
{
    // int arr[100] = {7, 8, 12, 27, 88}, size = 5, element = 45, index = 3, capacity = 100;
    int arr[100] = {7, 8, 12, 27, 88}, size = 5, element = 8, index = 4, capacity = 100;
    display(arr, size);
    if (index > size || index <= -1)
    {
        printf("deletion is not done\n");
    }
    else
    {
        printf("deletion is done\n");
        deletion(arr, size, element, index, 100);
        size--;
        display(arr, size);
    }
    return 1;
}
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
int insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        printf("array is full\n");
    }
    // for (int i = size - 1; i >= index; i--)
    // {
    //     arr[i + 1] = arr[i];
    // }
    // arr[index] = element;
    // return 1;

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    // int arr[100] = {7, 8, 12, 27, 88}, size = 5, element = 45, index = 3, capacity = 100;
    int arr[100] = {7, 8, 12, 27, 88}, size = 5, element = 36, index = 10, capacity = 100;
    display(arr, size);

    if (index > size || index <= -1)
    {
        printf("insertion not done\n");
    }
    else
    {
        printf("insertion is done\n");
        insertion(arr, size, element, 100, index);
        size++;
        display(arr, size);
    }

    return 1;
}
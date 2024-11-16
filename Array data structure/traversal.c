#include <stdio.h>
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// int main()
// {
//     int arr[5], elem;
//     printf("Enter the value for array\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &elem);
//         arr[i] = elem;
//     }
//     printf("The value of array is\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[99] = {1, 2, 3, 4};
    display(arr, 4);
    return 0;
}


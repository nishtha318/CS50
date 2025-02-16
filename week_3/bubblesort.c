#include<stdio.h>

void bubble_sort(int arr[8] , int size);

int main()
{
    int arr[8]= {0 , 2 , 5 , 4, 1 , 6 , 7 , 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr , size);

}

void bubble_sort(int arr[8] , int size)
{
    for(int i = 0 ; i < size - 1 ; i++)
    {
        for(int j = 0 ; j < size - i - 1 ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
    }

    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\t", arr[i]);
    }
    

}
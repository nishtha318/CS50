#include<iostream>
using namespace std;

int main()
{
    int arr[] = {7 , 2 , 5 , 4 , 1 , 6 , 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];


    for(int j = 0 ; j < n - 1 ; j++)
    {
        for(int i = 0 ; i < n - 1 ; i++ )
         {
            if(arr[i+1] < arr[i])
            {
                min = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = min;
            
            }

    
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}
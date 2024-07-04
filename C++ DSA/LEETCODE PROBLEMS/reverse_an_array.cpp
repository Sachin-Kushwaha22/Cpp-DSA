#include <iostream>
using namespace std;
void reverse_even();
void reverse_odd();
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

// void reverse(int arr,int size)
// {
//     //checking array is even or odd
    
//     if (size % 2 == 0)
//     {
//         reverse_even(arr, size);
//     }
//     else
//     {
//         reverse_odd(arr, size);
//     }
// }

void reverse_even(int arr[], int n)
{   
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(n - 1) - i];
        arr[(n - 1) - i] = temp;
    }
    printArray(arr, n);
}

void reverse_odd(int arr[], int n)
{
    int temp;
    for (int i = 0; i < (n-1)/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(n - 1) - i];
        arr[(n - 1) - i] = temp;
    }

    printArray(arr, n);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(int);
    cout << "Original array: ";
    printArray(arr, size);
    cout<<"Reversed array :";
    if (size % 2 == 0)
    {
        reverse_even(arr, size);
    }
    else
    {
        reverse_odd(arr, size);
    }
    return 0;
}
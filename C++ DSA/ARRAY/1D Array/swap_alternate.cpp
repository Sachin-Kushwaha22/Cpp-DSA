#include <iostream>
using namespace std;

// function for printing the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// creating the function to swap alernate

void swapEven(int arr[], int size)
{
    int temp = 0;
    for (int i = 1; i < size; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
    }
    printArray(arr, size);
}

using namespace std;
int main()
{
    int oddArr[5] = {1, 2, 3, 4, 5};
    printArray(oddArr, 5);
    swapEven(oddArr, 5);
    return 0;
}
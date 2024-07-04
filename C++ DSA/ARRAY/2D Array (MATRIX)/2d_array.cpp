#include <iostream>
using namespace std;

void printArray(int arr[10][10], int row, int cols)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}   
// creating a 2d-Array
void createArray(int arr[10][10], int row, int cols)
{
    int val = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> val;
            arr[i][j] = val; // taking input from user
        }
    }
    printArray(arr, row, cols);
}



int main()
{
    int arr[10][10] = {0};
    createArray(arr,3,3);
    return 0;
}
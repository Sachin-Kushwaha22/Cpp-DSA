#include <iostream>
using namespace std;

void printArray(int arr[10][10], int row, int cols)
{
    int c = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[c][j] << " ";
        }
        cout << endl;
        c++;
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


// creating a function to print the wave Print of an 2d array
/*  |   |__>|
    |  ^|   |
    |__>|   |  */

void wavePrintArray(int arr[10][10], int row, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        if (j & 1) // odd column
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            // even column
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    int arr[10][10] = {0};
    createArray(arr, 3, 3);
    wavePrintArray(arr, 3,3);
    return 0;
}
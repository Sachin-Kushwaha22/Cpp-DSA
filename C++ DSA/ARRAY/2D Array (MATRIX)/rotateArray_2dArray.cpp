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
    cout << endl;
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

// creating a function to rotate an array by 90 degree in right side

void rotateArrayRight(int arr[10][10], int arrRotated[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arrRotated[j][row - 1 - i] = arr[i][j];
        }
    }

    printArray(arrRotated, row, col);
}

// creating a function to rotate an array by 90 degree in Left side

void rotateArrayLeft(int arr[10][10], int arrRotated[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arrRotated[col - 1 - j][i] = arr[i][j];
        }
    }

    printArray(arrRotated, row, col);
}

// rotating an array without using another new array
void rotateWithoutNewArray(int arr[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j > i)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col/2; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][col-1-j];
            arr[i][col-1-j]=temp;
        }
        
    }
    printArray(arr,row,col);
}

int main()
{
    int arr[10][10] = {0};
    int arrRotated[10][10] = {0};
    createArray(arr, 3, 3);
    rotateArrayRight(arr, arrRotated, 3, 3);
    rotateArrayLeft(arr, arrRotated, 3, 3);
    rotateWithoutNewArray(arr, 3, 3);
    return 0;
}
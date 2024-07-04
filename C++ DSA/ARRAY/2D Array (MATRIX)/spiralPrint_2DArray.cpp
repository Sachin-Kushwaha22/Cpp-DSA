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

// creating a function to print spiralPrint an 2D array

void spiralPrintArray(int arr[10][10],int row,int col)
{
    int count=0;
    int total=row*col;

    int startingCol=0;
    int startingRow=0;
    int endingCol=col-1;
    int endingRow=row-1;

    while (count<total)
    {
        for (int i = startingCol;count<total &&  i <= endingCol ; i++)
        {
            cout<<arr[startingRow][i]<<" ";
            count++;
        }
        startingRow++;

        for (int i = startingRow;count<total &&  i <= endingRow; i++)
        {
            cout<<arr[i][endingCol]<<" ";
            count++;
        }
        endingCol--;

        for (int i = endingCol;count<total &&  i >=startingCol; i--)
        {
            cout<<arr[endingRow][i]<<" ";
            count++;
        }
        endingRow--;

        for (int i = endingRow;count<total &&  i>=startingRow ; i--)
        {
            cout<<arr[i][startingCol]<<" ";
            count++;
        }
        startingCol++;    
    }
       
}
int main()
{
    int arr[10][10] = {0};
    createArray(arr,3,3);
    spiralPrintArray(arr,3,3);
    return 0;
}
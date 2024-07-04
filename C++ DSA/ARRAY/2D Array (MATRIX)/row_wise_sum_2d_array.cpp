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

// creating a function to print the sum of every row in the 2d-array
void rowWiseSum(int arr[10][10], int row, int cols)
{
    int whichRow=0;
    int maxi=0;
    int count=0;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
        count++;
        if (sum>maxi)
        {
            maxi=sum;
            whichRow=count;
        }
        
        sum = 0;
    }
    cout<<"Row -->"<<whichRow<<endl;
}

int main()
{
    int arr[10][10] = {0};
    int row;
    cin >> row;
    int cols;
    cin >> cols;
    createArray(arr, row, cols);
    rowWiseSum(arr, row, cols);
    return 0;
}
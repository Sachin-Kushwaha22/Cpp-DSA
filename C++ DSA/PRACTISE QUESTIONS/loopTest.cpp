#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void revArray(int arr[], int n, int m)
{
    int start = m ;
    int end = n;
    int mid = start + (end - start) / 2;
    for (int i = start; i <= mid; i++)
    {
        swap(arr[start++], arr[end--]);
    }
    printArray(arr, n);
}
int main()
{
    int arr[8] = {2, 4, 6, 8, 3, 5,9,10};
    int m = 2;
    int n = sizeof(arr) / sizeof(int); // array declaration and initialization
    revArray(arr, n, m);

    return 0;
}
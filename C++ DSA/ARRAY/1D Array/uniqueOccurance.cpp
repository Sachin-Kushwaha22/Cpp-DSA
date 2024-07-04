#include <bits/stdc++.h>
using namespace std;

void uniqueOccurance(int arr[], int n)
{
    int save = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || arr[i] != arr[i - 1])
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            save = count;
            cout << save << " ";
        }
    }
}

int main()
{
    int arr[10] = {4, 4, 4, 8, 5, 5};
    uniqueOccurance(arr, 6);
    cout << endl;
    return 0;
}
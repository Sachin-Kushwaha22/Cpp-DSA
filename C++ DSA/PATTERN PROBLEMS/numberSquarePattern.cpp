#include <bits/stdc++.h>
using namespace std;

// creating a function to print square of numbers
void numberSquarePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)

                cout << 4 << " ";
            else if (i == 1 || j == 1 || i == n - 2 || j == n - 2)
                cout << 3 << " ";
            else if (i == 2 || j == 2 || i == n - 3 || j == n - 3)
                cout << 2 << " ";
            else
                cout << 1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    numberSquarePattern(n);
    return 0;
}
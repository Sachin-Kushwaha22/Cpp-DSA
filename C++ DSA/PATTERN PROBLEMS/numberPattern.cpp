#include <bits/stdc++.h>
using namespace std;

// creating a function to print num pattern in triangular
void numPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// creating a function to print num pattern in triangular form of same number of rows n column
void numPattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// creating a function to print numbes in reverse triangular pattern

void revTriangleNumPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)

        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    numPattern(n);
    numPattern2(n);
    revTriangleNumPattern(n);

    return 0;
}
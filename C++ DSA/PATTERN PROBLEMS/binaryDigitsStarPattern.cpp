#include <bits/stdc++.h>
using namespace std;

// creating a function to print pattern using binary digits
void binaryPattern(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start<<" ";
            start = 1 - start;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    binaryPattern(n);
    return 0;
}
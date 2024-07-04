#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    if (n == 0)
        return 1;
    else
    {
        cout << n << " ";
        count(n - 1);
    }
    return  0;
}

int main()
{
    int n;
    cin >> n;
    count(n);
    return 0;
}
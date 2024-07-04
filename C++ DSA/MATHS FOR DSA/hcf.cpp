#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b, int n)
{
    int ans = 0;
    
    for (int i = 1; i < n; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    return ans;

}

int main()
{
    int a, b;
    cin >> a >> b;
    int n;
    if (a > b)
    {
        n = a;
    }
    else
    {
        n = b;
    }
    cout<<hcf(a, b, n);
    
    return 0;
}
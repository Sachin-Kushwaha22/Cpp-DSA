#include <bits/stdc++.h>
using namespace std;

void numPrint(int n)
{

    for (int i = 0; i < n-1; i++)
    {
        for (char ch = 'A' + i; ch >='A'; ch--)
        {
            cout<<ch<<" ";
        }
        
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    numPrint(n);
    return 0;
}
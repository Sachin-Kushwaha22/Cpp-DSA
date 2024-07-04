#include <bits/stdc++.h>
using namespace std;

// creating a function to print the char pattern
void charPattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A'; // starting character of the alphabet
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
}

void revCharPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch='A';
        for (int j = 0; j < n-i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    charPattern(n);
    cout<<endl;
    revCharPattern(n);
    return 0;
}
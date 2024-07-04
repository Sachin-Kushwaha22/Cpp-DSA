#include <bits/stdc++.h>
using namespace std;

// creating a function to print the char pattern
void charPattern(int n)
{
    char ch = 'A'; // starting character of the alphabet
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    charPattern(n);
    return 0;
}
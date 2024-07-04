#include <bits/stdc++.h>
using namespace std;

// creating a function to print the chr pattern
void charPattern3(int n){
    for (int i = 0; i < n; i++)
    {
        //spaces
        for (int j = 1; j < n-i; j++)
        {
            cout<<" ";
        }
        //characters
        char ch='A';
        for (int j = 0; j <= i; j++)
        {
            cout<<ch;
            ch++;
        }
        //character lateral inverted
        for (char ch = 'A' + i-1; ch >='A'; ch--)
        {
            cout<<ch;
        }
        
        cout << endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    charPattern3(n);
    return 0;
}
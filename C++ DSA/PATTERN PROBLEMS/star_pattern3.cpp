#include <bits/stdc++.h>
using namespace std;

// creating a function to print star pattern

void starPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    // mirror 
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}

int main()
{
    int n;
    cin>>n;
    starPattern(n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// creating a function to print star pattern

void starPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }

        //spaces
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }

        //spaces
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }

        //star
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    // mirror
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }

        //spaces
        for (int j = 1; j < n-i; j++)
        {
            cout<<" ";
        }

        //spaces
        for (int j = 1; j < n-i; j++)
        {
            cout<<" ";
        }
        

        //star
        for (int j = 0; j < i+1; j++)
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
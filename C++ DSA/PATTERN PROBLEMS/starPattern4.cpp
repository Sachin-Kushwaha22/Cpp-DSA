#include <bits/stdc++.h>
using namespace std;

// creating a function to print the star pattern in pyramid 
void starPattern4(int n){
    // if (n%2==0)
    // {
    //     int mid=n/2;
    // }
    // else int mid=n/2 +1;
    
    // // loop for rows of stars
    
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        
        // stars
        for (int j = 0; j < 2*i+1 ; j++)
        {
            cout<<"*";
        }

        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
        
    }
    
}

// creating a function to print the reverse of the pyramid star pattern
void reverseStarPattern4(int n){
    // int temp=n;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        
        // stars
        // for (int j = 0; j < 2*temp-1 ; j++)
        // {   
        //     cout<<"*";
        // }
        // temp--;

        // another approch to star print
        for (int j = 0; j < 2*n-(2*i+1); j++)
        {
            cout<<"*";
        }
        
        
        // space
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
        
    }
    
}

int main()
{
    int n;
    cin>>n;
    starPattern4(n);
    reverseStarPattern4(n);
    return 0;
}
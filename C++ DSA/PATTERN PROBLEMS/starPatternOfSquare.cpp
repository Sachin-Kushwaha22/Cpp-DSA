#include <bits/stdc++.h>
using namespace std;

// creating a funxtion to print square pattern of stars
void starPatternOfSquare(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0 || j==0 || i==n-1 || j==n-1) // printing the first and last row or column
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    starPatternOfSquare(n);
    return 0;
}
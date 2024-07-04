#include <bits/stdc++.h>
using namespace std;

// creating a function to print number pattern 
void numPattern3(int n){
    int num=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    numPattern3(n);
    return 0;
}
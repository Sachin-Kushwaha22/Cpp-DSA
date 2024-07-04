#include <bits/stdc++.h>
using namespace std;

int factorOfTwo(int n){
    if(n==0) return 1;
    else return 2*factorOfTwo(n-1);
}
int main()
{
    int n;
    cout<<"WHat is power on 2 : ";
    cin >> n;
    cout<<factorOfTwo(n);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){
    if(n==0) return 0; 
    if(n==1) return arr[n-1];
    else return sum(arr,n-1)+arr[n-1];  
}

int main()
{
    int arr[10]={2,4,7,9,5,3,9};
    cout<<sum(arr,7)<<endl;
    return 0;
}
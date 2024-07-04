#include <bits/stdc++.h>
using namespace std;

void sayWord(int n, string arr[]){

    //base case
    if(n == 0) return ;
    
    //processing state
    int digit=n%10;
    n/=10;
    
    // recursion relation
    sayWord(n,arr);
    
    cout << arr[digit]<< " ";

}

int main()
{
    string arr[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    int n;
    cin>>n;
    sayWord(n,arr);
    return 0;
}
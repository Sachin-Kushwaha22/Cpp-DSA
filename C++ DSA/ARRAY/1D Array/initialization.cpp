// program to put same value in array of any size 
#include <iostream>
#include <algorithm>
using namespace std;
void sum(int n){
    cout<<n+1<<endl;
}
int main()
{
    int arr[100]={0};
    fill_n(arr,100,10);
    for (int i = 0; i <100; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
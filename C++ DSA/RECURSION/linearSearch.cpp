#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size,int target){
    if(size == 0) return false;
    if(arr[0]==target) return true;
    else{
        return linearSearch(arr+1,size-1,target);
    }

}

int main()
{
    int arr[10]= {2,3,4,5,6};
    int size=5;
    int key=4;
    cout<<linearSearch(arr,size,key);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &vec,int start,int end,int size,int target){
    if(start>end) return false;
    int mid=start + (end-start)/2;
    if(vec[mid]==target) return true;
    else if(vec[mid] > target) return binarySearch(vec,start,mid-1,size,target);
    else return binarySearch(vec,mid+1,end,size,target);
}

int main()
{
    vector<int> vec={2,4,5,6,7,9};
    int size=vec.size();
    int start=0;
    int end=size-1;
    int key=7;
    cout<<binarySearch(vec,start,end,size,key);
    return 0;
}
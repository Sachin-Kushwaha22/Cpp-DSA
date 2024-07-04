#include <bits/stdc++.h>
using namespace std;

// algorithm to merge
void merge(int arr[],int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;

    while (left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    int i=low;
    for (; i <= high; i++)
    {
        arr[i]=temp[i-low];
    }
    
}

// writing the code for merge sort algorithm
void mergeSort(int arr[],int low,int high){
    if(low>=high) return ;

    // taking middle part for breaking it into two 
    int mid=(low+high)/2;

    // left part
    mergeSort(arr,low,mid);

    // right part
    mergeSort(arr,mid+1,high);

    // merging the two parts
    merge(arr,low,mid,high);    
}

int main()
{
    int arr[10]={2,5,1,8,4,7,3,4,0,6};
    int n=10;
    cout<<"BEFORE MERGE SORT"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,0,n-1);
    cout<<endl<<"AFTER MERGE SORT"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
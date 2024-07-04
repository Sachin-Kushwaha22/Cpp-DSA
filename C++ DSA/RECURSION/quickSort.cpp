#include <bits/stdc++.h>
using namespace std;

// algo for partition
int partition(vector<int> &arr, int s, int e)
{
    int count=0;
    // counting the number of element greater than pivot value
    for (int i = s+1; i <= e; i++)
    {
        if (arr[s]>=arr[i])
        {
            count++;
        }
        
    }
    int pivotIndex=s+count;
    // swaping the pivot value with s+count th element
    swap(arr[pivotIndex],arr[s]);
    
    // placing the elemnt at there right location
    int i=s;
    int j=e;
    while (i<pivotIndex && j>pivotIndex){
        while (arr[i]<=arr[pivotIndex])
        {
            i++;
        }
        while (arr[j]>arr[pivotIndex])
        {
            j--;
        }
        if (i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
          
    }

    return pivotIndex;
}
// writing algo for quick sort
void quickSort(vector<int> &arr, int start, int end)
{
    // base case
    if (start >= end)
    {  
        return;
    }

    int p = partition(arr, start, end);
    
    // recursion call for left part
    quickSort(arr, start, p - 1);
    // recursion call for right part
    quickSort(arr, p + 1, end);
}
int main()
{
    vector<int> arr = {6,6,-6,-2,-4,-6,2,-6};
    int size = arr.size();
    cout<<"BEFORE QUICK SORT ALGORITHM"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    quickSort(arr, 0, size - 1);
    cout<<"AFTER QUICK SORT ALGORITHM"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}
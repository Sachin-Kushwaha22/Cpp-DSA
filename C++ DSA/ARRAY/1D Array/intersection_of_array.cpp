#include <iostream>
using namespace std;


// using nested for loop bad approch to solve problem O(n2)
int intersectionArray(int arr1[], int n, int arr2[], int m)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             cout << arr2[j] << " ";
    //             arr2[j] = 999; // Removing the element from second array so that it won't be counted again.
    //         }
    //     }
    // }
    int i=0,j=0;
    int ans=0;
    while (i<n && j<m)
    {
        if (arr1[i]==arr2[j])
        {
            ans=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<<arr2[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
    
}
int main()
{
    int arr1[5] = {2, 4, 6, 8, 9};
    int arr2[4] = {2, 6, 8, 14};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    intersectionArray(arr1, n, arr2, m);
    return 0;
}
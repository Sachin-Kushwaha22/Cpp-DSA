// #include <bits/stdc++.h>
// using namespace std;

// void firstAndLastPosition(vector<int> &arr, int n, int k) {

//   int first=-1;
//   int last=-1;

//   int start = 0;
//   int end = n - 1;
//   while (start < end) {
//     int mid=start+(end-start)/2;
//     if (arr[mid] == k) {

//       while (mid - 1 == mid) {
//         mid--;
//       }
//       first=mid;
//       while (mid == mid + 1) {
//         mid++;
//       }
//       last=mid;
//     }
//     else if (arr[mid]<k){
//         start=mid+1;
//     }
//     else
//         end=mid-1;
//   }
//   cout << "\nFirst position : " << first << endl;
//   cout << "Last position : " << last << endl;
// }

// int main()
// {
//     vector<int> arr={0,0,1,1,2,2,2};
//     int n=arr.size();
//     int k;
//     cin>>k;
//     firstAndLastPosition(arr, n, k);
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void firstAndLastPosition(vector<int> &arr, int n, int k) {

  int first = -1;
  int last = -1;

  int start = 0;
  int end = n - 1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == k) {
      if (arr[mid]==arr[mid-1]) {
        mid--;
      }
      else if (arr[mid]==arr[mid+1]) 
      {
        mid++;
      }
    } else if (arr[mid] < k) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  cout << "\nFirst position : " << first << endl;
  cout << "Last position : " << last << endl;
}

int main()
{
    vector<int> arr={0,0,1,1,2,2,2};
    int n=arr.size();
    int k;
    cin>>k;
    firstAndLastPosition(arr, n, k);
    
    return 0;
}
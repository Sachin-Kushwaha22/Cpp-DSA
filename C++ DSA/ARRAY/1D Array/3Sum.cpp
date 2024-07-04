#include <bits/stdc++.h>
using namespace std;

// void findTriplet(vector<int> &arr, int n, int target)
// {
//     vector<vector<int>> ans;
//     // first step sort the array
//     sort(arr.begin(), arr.end());

//     int i = 0;
//     while (i < n - 2)
//     {
//         int start = i + 1;
//         int end = n - 1;
//         while (start < end)
//         {
//             int sum = arr[i] + arr[start] + arr[end];
//             if (sum == target)
//             {
//                 vector<int> temp;
//                 temp.push_back(arr[i]);
//                 temp.push_back(arr[start]);
//                 temp.push_back(arr[end]);

//                 ans.push_back(temp);
//                 start++;
//                 end--;
//             }
//             else if (sum > target)
//                 end--;
//             else
//                 start++;
//         }
//         i++;
//     }
//     vector<vector<int>> answer(ans.begin(), ans.end());
//     // return answer;
//     for (auto x : answer)
//     {
//         for (auto y : x)
//         {
//             cout << y << " ";
//         }
//         cout << endl;
//     }
// }

void findTriplets(vector<int> arr, int n, int K)
{
    set<vector<int>> ans;

    // first we will sort the array make it easier to solve
    sort(arr.begin(), arr.end());

    int i = 0;
    while (i < n - 2)
    {
        int start = i + 1;
        int end = n - 1;
        while (start < end)
        {
            int sum = arr[i] + arr[start] + arr[end];
            if (sum == K)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[start]);
                temp.push_back(arr[end]);
                ans.insert(temp);
                start++;
                end--;
            }
            else if (sum > K)
                end--;
            else
                start++;
        }
        i++;
    }
    vector<vector<int>> answer(ans.begin(), ans.end());
    //   return answer;
    for (auto x : answer)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {10, 5, 5, 5, 2, 6, 4, 2};
    int size = arr.size();
    int target;
    cin >> target;
    findTriplets(arr, size, target);

    return 0;
}
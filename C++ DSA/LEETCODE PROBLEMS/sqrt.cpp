#include <bits/stdc++.h>
using namespace std;
double sqrt(int x){
    if(x==0 || x==1) return x;
    double start=0;
    double end=x;
    double ans=-1;
    while (start<=end)
    {
        double mid=start + (end-start)/2;
        double sqr=mid*mid;
        if(sqr==x) return  mid;
        else if(sqr<x){
            ans=mid;
            start=mid+1;
        }
        else end=mid-1;
    }
    // setprecision(3);
    return ans;
}
int main()
{
    double n;
    cin>>n;
    cout<<sqrt(n);
    return 0;
}
int search(vector<int>& arr, int n, int k)
{
    int start=0;
    int end=n-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]) start=mid+1;
        else end=mid;
    }
    int pivot=start;
    if(arr[pivot]==k){
        return pivot;
    }
    else if(k>=arr[pivot]&& k<=arr[n-1]){
        int s=pivot;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(k==arr[mid]) return mid;
            else if(k>arr[mid]) s=mid+1;
            else e=mid-1;
        }
    }
    else {
        int s=0;
        int e=pivot-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(k==arr[mid]) return mid;
            else if(k>arr[mid]) s=mid+1;
            else e=mid-1;
        }
    }
    return -1;
}

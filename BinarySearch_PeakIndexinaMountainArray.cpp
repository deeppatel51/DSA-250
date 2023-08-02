class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0, e=arr.size()-1, mid=s + (e-s)/2;
        while(true)
        {
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                break;
            }
            else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1])
            {
                s=mid;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1])
            {
                e=mid;
            }
            mid=s + (e-s)/2;
        }
        return mid;
    }
};

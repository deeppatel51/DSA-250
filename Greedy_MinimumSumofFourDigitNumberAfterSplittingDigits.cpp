class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        while(num){
            arr.push_back(num%10);
            num = num/10;
        }
        sort(arr.begin(),arr.end());
        int new1=0,new2=0;
        new1 = 10*arr[0]+arr[3];
        new2 = 10*arr[1]+arr[2];
        return new1+new2;
    }
};

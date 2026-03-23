class Solution {
public:
bool checker(vector<int> arr, long long k,int m){
    long long val=0;
    for(int i=0;i<arr.size();i++){
        val+=(long long)arr[i]/m;
    }
    return val>=k;
}
    int maximumCandies(vector<int>& arr, long long k) {
        int mini=INT_MIN;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            mini=max(mini,arr[i]);
        }
        int low=1,high=mini;
        while(low<=high){
            int mid=low+(high-low)/2;
            bool possy=checker(arr,k,mid);
            if(possy){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};

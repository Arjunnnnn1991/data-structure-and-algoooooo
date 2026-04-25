class Solution {
public:
int todo(vector<int>& arr, int k){
    int j=0,i=0,ans=0;
    int cur=0;
    while(j<arr.size()){
        cur+=arr[j];
        while(cur>k&&j>=i){
            cur-=arr[i++];
        }
        ans+=j-i+1;
        j++;
    }
    return ans;
}
    int numSubarraysWithSum(vector<int>& arr, int k) {
        if(k==0) return todo(arr,k);
        else return todo(arr,k)-todo(arr,k-1);
    }
};

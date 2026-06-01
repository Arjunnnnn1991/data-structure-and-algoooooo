class Solution {
public:
    int minimumCost(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans=0;
       for(auto x:arr){
        ans+=x;
       }
       for(int i=arr.size()-3;i>=0;i-=3){
        ans-=arr[i];
       }
       return ans;
    }
};

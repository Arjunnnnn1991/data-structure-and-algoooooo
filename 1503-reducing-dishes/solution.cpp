class Solution {
public:
    int maxSatisfaction(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int> suf(arr.size(),0);
        int count=0;
        for(int i=0;i<arr.size();i++){
            
            suf[n-1-i]=count+arr[n-1-i];
            count=suf[n-i-1];
            
        }
        int multiplier=1;
        int ans=0;
        for(int i=0;i<suf.size();i++){
            if(suf[i]>=0){
                ans+=arr[i]*multiplier++;
            }
        }
        suf.clear();
        return ans;
    }
};

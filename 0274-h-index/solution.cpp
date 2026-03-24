class Solution {
public:
    int hIndex(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans=0,k=arr.size();
        for(int i=0;i<arr.size();i++){
            int temp=arr[i];
            int l=0;
            l=min(temp,k-i);
            ans=max(ans,l);
        }
        return ans;
    }
};

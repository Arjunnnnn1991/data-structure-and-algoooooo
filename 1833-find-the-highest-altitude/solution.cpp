class Solution {
public:
    int largestAltitude(vector<int>& arr) {
        int maxi=0;
        int cur=0;
      for(int i=0;i<arr.size();i++){
        if(i!=0) arr[i]+=arr[i-1];
        maxi=max(maxi,arr[i]);
      }
        return maxi;
    }
};

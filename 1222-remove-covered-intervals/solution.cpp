bool cmp(vector<int>& a,vector<int>&b){
    if(a[0]!=b[0]) return a[0]<b[0];
    return a[1]>=b[1];
}
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        int ans=0;
        int j=0;
        while(j<arr.size()){
            int have=arr[j][1];
            while(j<arr.size()-1&&have>=arr[j+1][1]){
                j++;
                }
            ans++;
            j++;
        }
        return ans;
    }
};

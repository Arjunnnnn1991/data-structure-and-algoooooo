bool cmp(vector<int> a,vector<int> b){
    if(a[0]!=b[0]) return a[0]<b[0];
    else{
        return a[1]>b[1];
    }
}
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<vector<int>> arr;
        unordered_map<int,int> m;
        for(auto x: nums){
            m[x]++;
        }
        for(auto x:m){
            vector<int> t={x.second,x.first};
            arr.push_back(t);
        }
        sort(arr.begin(),arr.end(),cmp);
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i][0];j++) ans.push_back(arr[i][1]);
           
        }
        return ans;
    }
};

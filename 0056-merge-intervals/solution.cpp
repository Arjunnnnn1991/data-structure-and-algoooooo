class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        if(arr.size()==1) return arr;
        vector<vector<int>> ans;
        int i=0,j=1;
        while(j<arr.size()){
            int taker=arr[i][1];
            while(j<arr.size()&&arr[j][0]<=taker){
                taker=max(taker,arr[j][1]);
                j++;
            }
            ans.push_back({arr[i][0],taker});
            
            
            i=j;
           
        }
        return ans;
    }
};

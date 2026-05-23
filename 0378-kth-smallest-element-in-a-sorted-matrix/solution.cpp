class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>>pq;
        for(int i=0;i<arr.size();i++){
            pq.push({arr[i][0],i,0});
        }
        int ans;
        while(k--){
            auto[v,r,c]=pq.top();
            pq.pop();
            ans=v;
            if(arr[r].size()!=c+1)pq.push({arr[r][c+1],r,c+1});

        }
        return ans;

    }
};

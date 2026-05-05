class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,int>> pq;
        int idx=0;
        for(auto x: points){
            int dis=pow(x[0],2)+pow(x[1],2);
            
            pq.push({dis,idx++});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0){
            int w=pq.top().second;
            vector<int> temp={points[w][0],points[w][1]};
            ans.push_back(temp);
            pq.pop();
        }
        return ans;
    }
};

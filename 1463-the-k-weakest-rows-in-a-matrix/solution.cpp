class Solution {
public:
using  pi=pair<int,int>;
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pi>pq;
        for(int i=0;i<mat.size();i++){
            int low=0,high=mat[0].size()-1,mid;
            int maxi=0;
            while(low<=high){
                mid=low+(high-low)/2;
                if(mat[i][mid]==1){
                    maxi=mid+1;
                    low=mid+1;
                }
                else high=mid-1;
            }
            pi l={maxi,i};
            pq.push(l);
            if(pq.size()>k) pq.pop();

        }
        vector<int> ans;
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

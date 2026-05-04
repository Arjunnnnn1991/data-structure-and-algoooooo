class Solution {
public:
typedef pair<int,int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi> pq;
        for(auto n:arr){
            pi c={abs(x-n),n};
            pq.push(c);
            if(pq.size()>k)pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

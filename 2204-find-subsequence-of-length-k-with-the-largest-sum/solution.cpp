class Solution {
    
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int i=0;
        for(auto x: nums){
            pq.push({x,i++});
            if(pq.size()>k)pq.pop();
        }
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>sec;
        while(pq.size()){
            sec.push({pq.top().second,pq.top().first});
            pq.pop();
        }
        while(sec.size()){
            ans.push_back(sec.top().second);
            sec.pop();
        }
        return ans;
    }
};

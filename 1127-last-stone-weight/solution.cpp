class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto x: stones){
            pq.push(x);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            x=abs(x-y);
            if(x!=0) pq.push(x);
        }
        if(pq.size()!=0) return pq.top();
        else return 0;
    }
};

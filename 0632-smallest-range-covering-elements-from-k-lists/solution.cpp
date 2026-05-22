class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& arr) {
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>> pq;
        int curmax=INT_MIN;
        for(int i=0;i<arr.size();i++){
            pq.push({arr[i][0],i,0});
            curmax=max(curmax,arr[i][0]);
        }
        int l=0,r=INT_MAX;
        while(true){
            auto[val,row,col]=pq.top();
            pq.pop();
            if(curmax-val<r-l){
                l=val;
                r=curmax;
            }
            if(col+1==arr[row].size()) break;
            int next=arr[row][col+1];
            pq.push({next,row,col+1});
            curmax=max(curmax,next);
        }
        return {l,r};
    }
};

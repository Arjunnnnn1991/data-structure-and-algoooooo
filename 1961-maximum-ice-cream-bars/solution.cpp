class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
          sort(costs.begin(), costs.end());
        
        int count = 0;
        for (int cost : costs) {
            if (coins >= cost) {
                coins -= cost;
                count++;
            } else {
                break;
            }
        }
        
        return count;
        // unordered_map<int,int>m;
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        // for(auto x:costs){
        //     m[x]++;
        // }
        // for(auto x:m){
        //     pq.push({x.first,x.second});
        // }
        // int ans=0;
        // while(coins>0&&pq.size()&&(pq.top().first<=coins)){
        //     while(pq.top().second>0&&coins>=pq.top().first){
        //         ans++;
        //     auto t=pq.top();
        //     pq.pop();
        //     t.second--;
        //     pq.push(t);
        //     }
        //     pq.pop();
            
        // }
        // return ans;
    }
};

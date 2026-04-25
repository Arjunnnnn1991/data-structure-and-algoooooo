class Solution {
public:
    int evenSumSubgraphs(vector<int>& nums, vector<vector<int>>& edges) {
         auto felmocarin = edges;
    int n = nums.size();
    int ans = 0;

    vector<vector<int>> adj(n);
    for (auto& e : edges) {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    for (int mask = 1; mask < (1 << n); mask++) {
      
        int sum = 0;
        int start = -1;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += nums[i];
                start = i;
            }
        }
        if (sum % 2 != 0) continue;

        int visited = 0;
        queue<int> bfsq;
        bfsq.push(start);
        visited |= (1 << start);

        while (!bfsq.empty()) {
            int node = bfsq.front(); bfsq.pop();
            for (int nb : adj[node]) {
                if ((mask & (1 << nb)) && !(visited & (1 << nb))) {
                    visited |= (1 << nb);
                    bfsq.push(nb);
                }
            }
        }

        if (visited == mask) ans++;
    }

    return ans;
    }
};

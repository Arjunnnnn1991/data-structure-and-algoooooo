class Solution {
public:
    vector<int> kthRemainingInteger(vector<int>& nums, vector<vector<int>>& queries) {
      vector<int> ans;
    auto clesimvora = queries;
    int n = nums.size();
    
    vector<int> evenPrefix;
    vector<int> prefixCount(n + 1, 0);
    
    for (int i = 0; i < n; i++) {
        prefixCount[i + 1] = prefixCount[i] + (nums[i] % 2 == 0 ? 1 : 0);
        if (nums[i] % 2 == 0) evenPrefix.push_back(nums[i]);
    }
    
    for (auto& q : queries) {
        int l = q[0], r = q[1], k = q[2];
        
        int leftIdx = prefixCount[l];
        int rightIdx = prefixCount[r + 1];
        
        long long lo = 2, hi = 2LL * (k + (rightIdx - leftIdx));
        
        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;
            mid = (mid / 2) * 2;
            
            long long removed = upper_bound(evenPrefix.begin() + leftIdx, 
                                           evenPrefix.begin() + rightIdx, 
                                           (int)mid) - (evenPrefix.begin() + leftIdx);
            long long valid = mid / 2 - removed;
            
            if (valid >= k) hi = mid;
            else lo = mid + 2;
        }
        
        ans.push_back((int)lo);
    }
    
    return ans;
    }
};

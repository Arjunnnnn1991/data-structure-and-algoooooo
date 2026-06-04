class Solution {
public:
   vector<int> findErrorNums(vector<int>& nums) {
    unordered_map<int,int> mp;
    int dup, miss;
    for (int x : nums) mp[x]++;
    for (int i = 1; i <= nums.size(); i++) {
        if (mp[i] == 2) dup = i;
        if (mp[i] == 0) miss = i;
    }
    return {dup, miss};
}
};

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());

      
        for (int i = 1; i < nums.size(); i++)
            nums[i] += nums[i-1];

        vector<int> result;
        for (int q : queries) {
        
            int pos = upper_bound(nums.begin(), nums.end(), q) - nums.begin();
            result.push_back(pos);
        }

        return result;
    }
};

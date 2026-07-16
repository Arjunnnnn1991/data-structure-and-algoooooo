class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0, left = 0;
        for (int n : nums) total += n;

        for (int i = 0; i < nums.size(); i++) {
            // right sum = total - left - nums[i]
            if (left == total - left - nums[i])
                return i;
            left += nums[i];
        }

        return -1;
    }
};

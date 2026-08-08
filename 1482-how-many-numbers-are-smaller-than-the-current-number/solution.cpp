class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> freq(102, 0);

       
        for (int n : nums)
            freq[n]++;

      
        for (int i = 1; i <= 101; i++)
            freq[i] += freq[i-1];

        vector<int> result;
        for (int n : nums)
            result.push_back(n == 0 ? 0 : freq[n-1]);

        return result;
    }
};

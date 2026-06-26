class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count[60] = {};
        int result = 0;

        for (int t : time) {
            int rem = t % 60;
            int complement = (60 - rem) % 60;
            result += count[complement];
            count[rem]++;
        }

        return result;
    }
};

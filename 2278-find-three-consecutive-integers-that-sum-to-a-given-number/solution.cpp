class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long > ans;
        if(num%3!=0) return  ans;
        long long mid=num/3;
        ans.push_back((long long)mid-1);
        ans.push_back((long long)mid);
        ans.push_back((long long)mid+1);
        return ans;
    }
};

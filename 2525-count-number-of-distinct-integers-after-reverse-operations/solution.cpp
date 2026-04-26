class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            int x=0;
            while(nums[i]>0){
                x=x*10+nums[i]%10;
                nums[i]/=10;
            }
           
            s.insert(x);
        }
        return s.size();
    }
};

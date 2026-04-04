class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int j=nums.size()-1;
       while(j>=2){
        int x=nums[j];
        int y=nums[j-1]+nums[j-2];
        if(x<y) return x+y;
        j--;
       }
       return 0;
    }
};

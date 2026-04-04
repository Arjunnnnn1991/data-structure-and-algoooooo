class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3) return nums[nums.size()-1];
       int count=1;
       
       int cur=nums[nums.size()-1];
       
       int i=nums.size()-1;
       while(i>0&&count<3){
        if(nums[i-1]==cur){
            i--;
        }
        else{
            cur=nums[i-1];
            count++;
            i--;
        }
       }
       if(count==3) return cur;
       else return nums[nums.size()-1];
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<bool> flag(n+1,false);
        int i=0;
        while(i<n){
            flag[nums[i]]=true;
            i++;
        }
        for(int i=0;i<n+1;i++){
            if(flag[i]==false){
                return i;
            }
        }
        return 0;
    }
};

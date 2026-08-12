class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int i=0,j=0,ans=0;
        while(j<nums.size()){
            int x=nums[j];
            m[x]++;
            if(m[x]>k){
                int check=true;
                while(i<=j&&check){
                    m[nums[i]]--;
                    i++;
                    if(m[x]==k)check=false;
                }

            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }

};

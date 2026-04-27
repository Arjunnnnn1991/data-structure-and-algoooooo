class Solution {
public:
int rev(int val){
    int ans=0;
    while(val>0){
        ans=ans*10+val%10;
        val/=10;

    }
    return ans;
}
    int countNicePairs(vector<int>& nums) {
        int ans=0;
        int mod=pow(10,9)+7;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-rev(nums[i]);
            if(m.find(nums[i])!=m.end()){
               ans= (ans+m[nums[i]])%mod;
                m[nums[i]]++;
                
            }
            else{
                m[nums[i]]++;
            }
        }
        return ans;
    }
};

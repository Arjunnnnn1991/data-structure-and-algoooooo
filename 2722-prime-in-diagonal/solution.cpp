class Solution {
public:
void checkprime(int a,int *ans){
    bool flag=true;
    if(a<=1) return;
    for(int i=2;i*i<=a;i++){
        if(a%i==0) {
            flag=false;
            break;
            
        }
    }
    if(flag) *ans=max(*ans,a);
    return;
}
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(i==j) checkprime(nums[i][j],&ans);
                else if(j==(nums[0].size()-1-i)&&i==(nums.size()-j-1)) checkprime(nums[i][j],&ans);
                else continue;
            }
        }
        if(ans==INT_MIN) return 0;
        else return ans;
    }
};

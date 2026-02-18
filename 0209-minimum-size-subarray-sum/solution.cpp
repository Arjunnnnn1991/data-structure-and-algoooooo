class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int i=0,j=0,cursome=0,ans=INT_MAX;
        while(j<=arr.size()){
            if(target>cursome){
                if(j==arr.size())break;
                cursome+=arr[j];
                j++;
            }
            else{
                cursome-=arr[i];
                ans=min(j-i,ans);
                i++;
            }
        }
       if(ans==INT_MAX) return 0;
        return ans;
    }
};

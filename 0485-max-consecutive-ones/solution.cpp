class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
       int cur=0,ans=0,i=0,j=0;
       while(j<arr.size()){
        while(j<arr.size()&&arr[j]==1)j++;
        cur=j-i;
        ans=max(cur,ans);
        
        i=j+1;
        j++;
       }
       return ans;
    }
};

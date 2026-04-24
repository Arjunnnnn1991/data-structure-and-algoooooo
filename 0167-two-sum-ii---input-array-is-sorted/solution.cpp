class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i=0,j=arr.size()-1;
        vector<int> ans(2,1);
        while(i<j){
            if(arr[i]+arr[j]==target){
                ans[0]+=i;
                ans[1]+=j;
                return ans;
            }
            else if(arr[i]+arr[j]>target)j--;
            else i++;
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int write=arr.size()-1,l=0,r=arr.size()-1;
        vector<int> ans(arr.size(),0);
        while(l<=r){
            int x=arr[l]*arr[l];
            int y=arr[r]*arr[r];
            if(x>y){
                ans[write--]=x;
                l++;
            }
            else{
                ans[write--]=y;
                r--;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int maxArea(vector<int>& arr) {
        int maxwater=0;
        int curwater=0;
        int i=0,j=arr.size()-1;
        while(i<j){
            int height=min(arr[i],arr[j]);
            curwater=(j-i)*height;
            maxwater=max(curwater,maxwater);
            if(arr[i]>arr[j]) j--;
            else i++;
        }
        return maxwater;
    }
};

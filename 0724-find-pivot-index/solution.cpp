class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        if(arr.size()==1)return 0;
        int l=0,r=0;
        int cur=0;
        for(int i=1;i<arr.size();i++){
            r+=arr[i];
        }
        while(cur<arr.size()){
            if(l==r) return cur;
            else{
                l+=arr[cur];
                if(cur<arr.size()-1)r-=arr[cur+1];
                else r=0;
            }
            cur++;
        }
        return -1;
    }
};

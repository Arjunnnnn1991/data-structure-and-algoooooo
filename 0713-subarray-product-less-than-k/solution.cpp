class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        int i=0,j=0,ans=0,prod=1;
        if(k<=1) return 0;
        while(j<arr.size()){
            if(arr[j]<k){
                
                i=j;
                prod=1;
                
                while(prod*arr[i]<k){
                    prod*=arr[i++];
                    ans++;
                    if(i==arr.size()) break;
                     }
            }
            j++;
        }
        return ans;
        
    }
};

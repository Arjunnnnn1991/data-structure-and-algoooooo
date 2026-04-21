class Solution {
public:
    int maxProduct(vector<int>& arr) {
       int maxi=arr[0],mini=arr[0],res=arr[0];
       for(int i=1;i<arr.size();i++){
        if(arr[i]<0){
            swap(mini,maxi);
        }
        maxi=max(arr[i],maxi*arr[i]);
         mini=min(arr[i],mini*arr[i]);
         res=max(res,maxi);
       }
       return res;
    }
};

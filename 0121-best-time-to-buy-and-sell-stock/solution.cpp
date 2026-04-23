class Solution {
public:
    int maxProfit(vector<int>& arr
    ) {
        int i=0;
        int j=0;
        int maxi=0;
        while(j<arr.size()){
            if(arr[j]-arr[i]<0){
                i=j;
            }
            else{
                maxi=max(maxi,arr[j]-arr[i]);
            }
            j++;
        }
        return maxi;
    }
};

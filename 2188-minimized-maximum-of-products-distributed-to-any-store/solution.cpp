class Solution {
public:
     bool willhappen(int n, vector<int>&arr,int x){
        for(int i=0;i<arr.size();i++){
            n-=arr[i]/x;
            if(arr[i]%x!=0) n--;
        }
        if(n>=0) return true;
        else return false;
     }
    int minimizedMaximum(int n, vector<int>& arr) {
        // sort(arr.begin(),arr.end());
    int high=INT_MAX;
    int low=1,mid;
    int ans=high;
    while(high>=low){
        mid=low+(high-low)/2;
        if(willhappen(n,arr,mid)){
            ans=min(ans,mid);
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
    }
};

class Solution {
public:
    
    void calcu(vector<int> &a,vector<int>&b,int & ans){
        if(a.size()==0||b.size()==0) return;
        int i=a.size()-1,j=b.size()-1;
        while(i>=0&&j>=0){
            if((long long)a[i] > 2LL*b[j]){
               ans+=j+1;
                i--;
            }
            else j--;
        }
        return;
    }
     vector<int>  merger(vector<int> &a,vector<int>&b){
        vector<int> ans(a.size()+b.size(),0);
        int i=0,j=0,k=0;
        while(k<ans.size()){
            if(i==a.size()){
                ans[k++]=b[j++];
            }
            else if(j==b.size()){
                ans[k++]=a[i++];
            }
            else if(a[i]<b[j]){
                ans[k++]=a[i++];
            }
            else ans[k++]=b[j++];
        }
        return ans;
     }
     void dome(vector<int> &nums,int & ans){
        int low=0,high=nums.size();
        if(nums.size()==1) return;
        int mid=low+(high-low)/2;
        vector<int> a(mid,0);
        vector<int> b(high-mid,0);
        for(int i=0;i<mid;i++){
            a[i]=nums[i];
        }
        for(int i=low+mid;i<high;i++){
            b[i-mid]=nums[i];
        }
        dome(a,ans);
        dome(b,ans);
        calcu(a,b,ans);
        nums=merger(a,b);
        return;
     }
    int reversePairs(vector<int>& nums) {
        int ans=0;
        dome(nums,ans);
        return ans;
    }
};

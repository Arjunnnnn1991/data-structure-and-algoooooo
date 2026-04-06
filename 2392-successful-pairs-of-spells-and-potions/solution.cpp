class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       
        sort(potions.begin(),potions.end());
        vector<int> ans(spells.size(),0);
        for(int i=0;i<spells.size();i++){
            int low=0,high=potions.size()-1,mid,pivot=-1;
            while(low<=high){
                mid=low+(high-low)/2;
                long long x=(long long)spells[i]*potions[mid];
                if(x>=success){
                    pivot=potions.size()-mid;
                    high=mid-1;
                }
                else low=mid+1;
            }
            if(pivot!=-1) ans[i]=pivot;
        }
        return ans;

    }
};

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i=nums1.size()-1;
        int j=nums2.size()-1;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if(j>i) return intersection(nums2,nums1);
        while(j>=0&&i>=0){
            if(nums1[i]==nums2[j]){
                if(ans.size()==0) {
                    ans.push_back(nums1[i]);
                    i--;
                    j--;
                }
                else{
                    if(ans[ans.size()-1]!=nums1[i]) {ans.push_back(nums1[i]);
                    i--;
                    j--;}
                    else{
                        i--;
                        j--;
                    }
                }
            }
            else{
                if(nums1[i]>nums2[j]) i--;
                else j--;
            }
        }
        return ans;
    }
};

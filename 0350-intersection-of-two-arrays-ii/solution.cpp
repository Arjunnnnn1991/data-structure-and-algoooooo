class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> ans;
        // unordered_map<int,int> a;
        // unordered_map<int,int>b;
        // for(auto x:nums1){
        //     a[x]++;
        // }
        // for(auto x:nums2){
        //     b[x]++;
        // }
        // for(auto x:a){
        //     int y=x.first;
        //     if(b.count(y)){
        //         for(int i=0;i<min(x.second,b[y]);i++){
        //             ans.push_back(y);
        //         }
        //     }
        // }
        sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
         vector<int> ans;
        int i=0;
        int h=min(nums1.size(),nums2.size());
        int j=0;
        while(i<nums1.size()&&j<nums2.size()){
            int cur=0;
            int pr=nums1[i];
            while(i<nums1.size()&&j<nums2.size()&&nums1[i]==pr&&nums2[j]==pr){
                cur++;
                i++;
                j++;
            }
            if (cur!=0) {
                for(int i=0;i<cur;i++){
                    ans.push_back(pr);
                }
            }
            if(i<nums1.size()&&j<nums2.size()&&nums1[i]!=nums2[j]){
                if
                (i<nums1.size()&&j<nums2.size()&&nums1[i]<nums2[j]){
                    while(i<nums1.size()&&j<nums2.size()&&nums1[i]<nums2[j])i++;
                }
                else {
                    while(i<nums1.size()&&j<nums2.size()&&nums1[i]>nums2[j])j++;
                    
                }
            }
        }
        return ans;
       
    }
};

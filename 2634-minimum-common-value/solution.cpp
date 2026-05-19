class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        long long mini=INT_MAX;
        unordered_set<long long>s;
        for(auto x:nums1){
            s.insert(x);
        }
        for(auto x:nums2){
            if(s.count(x)) mini=(mini<x)?mini:x;
        }
        if(mini==INT_MAX) return -1;
        else return mini;
    }
};

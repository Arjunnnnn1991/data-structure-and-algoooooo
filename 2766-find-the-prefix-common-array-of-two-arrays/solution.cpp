class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>&b) {
        unordered_set<int> s1;
        unordered_set<int> s2;
        int cur=0;
        vector<int> ans;
        for(int i=0;i<a.size();i++){
            int x=a[i];
            int y=b[i];
            if(s2.count(x)) cur++;
            if(s1.count(y)) cur++;
            if(x==y) cur++;
            s1.insert(x);
            s2.insert(y);
            ans.push_back(cur);
        }
        return ans;

    }
};

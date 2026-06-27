class Solution {
public:
    int distributeCandies(vector<int>& t) {
        unordered_set<int>s;
        for(auto x:t){
            s.insert(x);
        }
        return min(s.size(),t.size()/2);
    }
};

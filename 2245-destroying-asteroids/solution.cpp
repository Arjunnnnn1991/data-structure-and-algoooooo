class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long long cur=mass;
        for(auto x:arr){
            if(x>cur) return false;
            else cur+=x;
        }
        return true;
    }
};

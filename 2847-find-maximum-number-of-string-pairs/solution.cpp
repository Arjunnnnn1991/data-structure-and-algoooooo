class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        unordered_set<string>s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        int ans=0;
        for(string x:s){
            if(x[0]==x[1]) continue;
            else {
                string y=x;
                reverse(y.begin(),y.end());
                if(s.find(y)!=s.end()){
                    ans++;
                    s.erase(y);
                }
            }
        }
        return ans;
    }
};

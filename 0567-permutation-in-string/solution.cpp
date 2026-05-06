class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int>need;
        unordered_map<char,int> cur;
        for(auto x:s1){
            need[x]++;
        }
      
        int i=0,j=0;
        int count=0;
        while(j<s2.size()){
            cur[s2[j]]++;
            if(need.count(s2[j])&&need[s2[j]]>=cur[s2[j]]) count++;
            if(j-i>s1.size()-1){
                if(need.count(s2[i])&&cur[s2[i]]<=need[s2[i]]) count--;
                cur[s2[i]]--;
                i++;
            }
            if(count==s1.size()) {
                return true;
            }
            j++;
        }
        return false;
    }
};

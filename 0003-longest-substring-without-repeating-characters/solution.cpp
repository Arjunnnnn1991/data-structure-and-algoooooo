class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        unordered_set<char> st;
        int ans=0;
        for(j;j<s.size();j++){
            if(!st.count(s[j])){
                st.insert(s[j]);
                ans=max(ans,(int)st.size());
            }
            else{
                while(st.count(s[j])){
                    st.erase(s[i++]);
                }
                st.insert(s[j]);
                ans=max(ans,(int)st.size());
            }
        }
        return ans;
    }
};

class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> count(3,0);
        int i=0,j=0;
        int ans=0;
        while(j<s.size()){
            char a=s[j];
            if(a=='a') count[0]++;
            else if(a=='b') count[1]++;
            else count[2]++;
            while(i+1<j){
                if(count[0]>0&&count[1]>0&&count[2]>0){
                ans+=s.size()-j;
                char b=s[i];
            if(b=='a') count[0]--;
            else if(b=='b') count[1]--;
            else count[2]--;
            i++;
            }
            else break;
            }
            j++;


        }
        return ans;
    }
};

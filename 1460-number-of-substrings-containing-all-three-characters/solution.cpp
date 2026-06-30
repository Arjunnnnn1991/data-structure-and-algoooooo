class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
        int i=0,j=0;
    vector<int> arr(3,0);
    while(j<s.size()){
        if(s[j]=='a')arr[0]++;
        else if(s[j]=='b')arr[1]++;
        else if(s[j]=='c')arr[2]++;
        if(arr[0]&&arr[1]&&arr[2]){
            // ans+=s.size()-j-1;
            while(arr[0]&&arr[1]&&arr[2]){
                if(s[i]=='a')arr[0]--;
                else if(s[i]=='b')arr[1]--;
                else if(s[i]=='c')arr[2]--;
                ans+=s.size()-j;
                i++;
            }
        }
        j++;
    }
    return ans;
    }
};

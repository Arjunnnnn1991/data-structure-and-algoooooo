bool cmp(string a,string b){
    return a+b>b+a;
    // int i=0,j=0;
    // while(i<a.size()&&j<b.size()){
    //     if(a[i]>b[j]) return true;
    //     if(a[i]<b[j]) return false;
    //     i++;
    //     j++;
    // }
    // if(i<a.size()) {
    //     j=0;
    //     while(i<a.size()&&j<b.size()){
    //     if(a[i]>b[j]) return true;
    //     if(a[i]<b[j]) return false;
    //     i++;
    //     j++;
    // }
       
    // }
    // else if(j<b.size()) {
    //     i=0;
    //   while(i<a.size()&&j<b.size()){
    //     if(a[i]>b[j]) return true;
    //     if(a[i]<b[j]) return false;
    //     i++;
    //     j++;
    // }
        
    // }
    // if(i<a.size()) return false;
    // else if(j<b.size()) return true;
    // return true;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> maker;
        for(auto x:nums){
            maker.push_back(to_string(x));
        }
        sort(maker.begin(),maker.end(),cmp);
        string ans="";
        for(auto x:maker){
          ans+=x;
        }
        while(ans.size()>1&&ans[0]=='0') ans.erase(ans.begin());
        return ans;
    }
};

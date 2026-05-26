class Solution {
public:
    string greatestLetter(string s) {
        priority_queue<int> up;
        priority_queue<int>lo;
        for(auto x:s){
            if(x<='z'&&x>='a'){
                lo.push(x);
            }
            else up.push(x);
        }
        while(up.size()&&lo.size()){
            if(up.top()-'A'==lo.top()-'a') {
                string ans(1,up.top()) ;
                return ans;
            }
            else if(up.top()-'A'>lo.top()-'a') up.pop();
            else lo.pop();
        }
        return "";
    }
};

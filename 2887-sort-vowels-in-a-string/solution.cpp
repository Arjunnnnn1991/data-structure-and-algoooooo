class Solution {
public:
    string sortVowels(string s) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto a:s){
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='I'||a=='U'||a=='O'||a=='E')pq.push((int)a);
        }
        for(int i=0;i<s.size();i++){
            char a=s[i];
           if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='I'||a=='U'||a=='O'||a=='E'){
                s[i]=(char)pq.top();
                pq.pop();
            }
        }
        return s;
    }
};

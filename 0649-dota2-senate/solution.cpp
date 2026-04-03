class Solution {
public:
    string predictPartyVictory(string s) {
       queue<int> idx;
       queue<int> d;
       queue<int> r;
       for(int i=0;i<s.size();i++){
        if(s[i]=='D') d.push(i);
        else r.push(i);
        idx.push(i);
       }
       while(idx.size()>1){
        if(s[idx.front()]=='D'){
            if(r.size()==0) return "Dire";
            else{
                 s[r.front()]='X';
                r.pop();
                d.push(d.front());
                d.pop();
                idx.push(idx.front());
                idx.pop();

            }
        }
        else if(s[idx.front()]=='X'){
            idx.pop();
        }
        else{
            if(d.size()==0) return "Radiant";
            else{
                s[d.front()]='X';
                d.pop();
                r.push(r.front());
                r.pop();
                idx.push(idx.front());
                idx.pop();
            }
        }
       }
       if(d.size()==0) return "Radiant";
       else return "Dire";
       
    }
};

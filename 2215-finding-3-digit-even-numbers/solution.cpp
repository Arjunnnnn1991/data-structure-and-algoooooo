class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& arr) {
        map<int,int> m;
        vector<int> ans;
        set<int> s;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(int i=100;i<=999;i+=2){
            int w=i;
            int x=w%10;
            w/=10;
            int y=w%10;
            w/=10;
           if(m.find(x)==m.end()||m.find(y)==m.end()||m.find(w)==m.end())   continue;
           if(x!=y&&y!=w&&w!=x) s.insert(i);
            if(x==y&&x==w){
                if(m[x]>=3) s.insert(i);
                else continue;
            }
            if(x==y){
                if(m[x]>=2)  s.insert(i);
                else continue;
            }
            if(x==w){
                if(m[x]>=2)  s.insert(i);
                else continue;
            }
            if(w==y){
                if(m[w]>=2)  s.insert(i);
                else continue;
            }

        }
        for(int x:s){
            ans.push_back(x);
        }
        return ans;
    }
};

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& mat) {
        long long ans=0;
        unordered_map< double,int>m;
       
        for(auto x:mat){
            if(m.count(( double)x[0]/( double)x[1])){
                ans+=m[( double)x[0]/( double)x[1]];
                m[( double)x[0]/( double)x[1]]++;
            }
            else{
                m[( double)x[0]/( double)x[1]]=1;
            }
        }
        return ans;
    }
};

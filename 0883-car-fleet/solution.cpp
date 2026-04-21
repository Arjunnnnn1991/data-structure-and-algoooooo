   
   #include <stack>
  
class Solution {

public:

    int carFleet(int target, vector<int> p, vector<int> s) {
        // stack<vector<float>>st;
        float curt;
        int count=1;
        vector<pair<int,float>>arr(p.size());
        for(int i=0;i<p.size();i++){
            arr[i]={(float)p[i],(float)(target-p[i])/(float)s[i]};
         
        }
        sort(arr.begin(),arr.end());
       curt=arr[arr.size()-1].second;
        for(int i=arr.size()-2;i>=0;i--){
           if(curt<arr[i].second){
            count++;
            curt=arr[i].second;
           }
        }
        return count;


        
    }
};

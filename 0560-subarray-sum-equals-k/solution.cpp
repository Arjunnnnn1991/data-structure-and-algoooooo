class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        vector<int> pre(arr.size(),0);
        unordered_map<int,int>m;
      
        pre[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            pre[i]=arr[i]+pre[i-1];
            
        }
        int ans=0;
       for(int i=0;i<pre.size();i++){
        if(pre[i]==k) ans++;
        int res=pre[i]-k;
        if(m.find(res)!=m.end())ans+=m[res];
        m[pre[i]]++;
       }
       return ans;

    }
};

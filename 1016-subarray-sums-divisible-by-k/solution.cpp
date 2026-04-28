class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
       int pre=0;
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            pre+=arr[i];
            if(pre%k==0) ans++;
            int res=((pre%k)+k)%k;
            if(m.find(res)!=m.end())ans+=m[res];
            m[res]++;
        }
        return ans;
    }
};

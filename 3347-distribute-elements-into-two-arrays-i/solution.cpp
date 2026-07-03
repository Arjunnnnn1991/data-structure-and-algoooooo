class Solution {
public:
    vector<int> resultArray(vector<int>& arr) {
        vector<int> a;
        vector<int>b;
        vector<int>ans(arr.size(),0);
        a.push_back(arr[0]);
        b.push_back(arr[1]);
        for(int i=2;i<arr.size();i++){
            if(a[a.size()-1]>b[b.size()-1])a.push_back(arr[i]);
            else b.push_back(arr[i]);
        }
        for(int i=0;i<a.size();i++){
            ans[i]=a[i];
        }
        for(int i=0;i<b.size();i++){
            ans[a.size()+i]=b[i];
        }
        return ans;
        
    }
};

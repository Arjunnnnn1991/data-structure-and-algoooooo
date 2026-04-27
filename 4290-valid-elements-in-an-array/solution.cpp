class Solution {
public:
    vector<int> findValidElements(vector<int>& arr) {
        vector<bool>  check(arr.size(),false);
        if(arr.size()<=2) return arr;
        
        int lft=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>lft){
                check[i]=true;
            }
            lft=max(lft,arr[i]);
        }
        int rt=INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>rt){
                check[i]=true;
            }
            rt=max(rt,arr[i]);
        }
        vector<int> ans;
        for(int i=0;i<check.size();i++){
            if(check[i]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};

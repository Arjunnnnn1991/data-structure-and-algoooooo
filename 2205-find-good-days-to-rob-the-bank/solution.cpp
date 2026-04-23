class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& arr, int time) {
        vector<int> pre;
        int cur=0;
        pre.push_back(0);
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]>0){
                cur=0;
                pre.push_back(cur);
            }
            else {
                cur++;
                pre.push_back(cur);
            }
        }
         cur=0;
    vector<int> post(arr.size(),0);
    for(int i=arr.size()-2;i>0;i--){
        if(arr[i]<=arr[i+1]){
            cur+=1;
            post[i]=cur;
        }
        else{
            cur=0;
        }
    }
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        if(pre[i]>=time&&post[i]>=time) ans.push_back(i);
    }
    return ans;
    }
};

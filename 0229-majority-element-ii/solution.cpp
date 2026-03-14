class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i=1;
            int cur=arr[0];
            int countt=1;
        vector<int> ans;
        if(arr.size()==1) {
            ans.push_back(arr[0]);
            return ans;
        }
        // else if(arr.size()==2){
        //     ans.push_back(arr[0]);
        //     ans.push_back(arr[1]);
        //     return ans;
        // }
        // else if(arr.size()==3){
        //     ans.push_back(arr[1]);
        //     return ans;
        // }
        else{
            
            while(i<arr.size()){
                if(arr[i]==cur){
                    countt++;
                }
                else{
                    if(countt>arr.size()/3) ans.push_back(cur);
                    cur=arr[i];
                    countt=1;
                }
                i++;
            }
        }
        if(countt>arr.size()/3) ans.push_back(cur);
        return ans;
    }
};

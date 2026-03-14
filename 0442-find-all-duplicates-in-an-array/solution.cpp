class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;
        int i=0;
        while(i<arr.size()){
            // if(arr[i]==i+1) {
            //     i++;

            // }
            // else if(arr[i]==arr[arr[i]-1]){
            //     ans.push_back(arr[i]);
            //     i++;
            // }
            // else {
            //     swap(arr[i],arr[arr[i]-1]);
            // }
            if(arr[i]==i+1) i++;
            else{
                if(arr[i]==arr[arr[i]-1]){
                    i++;
                }
                else {swap(arr[i],arr[arr[i]-1]);}
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=i+1){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};

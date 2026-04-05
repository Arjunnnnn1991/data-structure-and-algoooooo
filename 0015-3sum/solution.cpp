class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(i>0&&arr[i]==arr[i-1]) continue;
            int x=arr[i];
            int left=i+1;
            int right=arr.size()-1;
            while(left<right){
                
               int total=x+arr[left]+arr[right];
               if(total==0){
                vector<int> t={arr[i],arr[left],arr[right]};
                ans.push_back(t);
                   
                while(left<right&&arr[left]==arr[left+1])  left++;
                while(right>left&&arr[right]==arr[right-1]) right--;
                left++;
                right--;
              
               }
               else if(total>0) right--;
               else left++;
              
                
            }
        }
        return ans;
    }
};

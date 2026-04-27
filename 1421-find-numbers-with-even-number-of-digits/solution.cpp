class Solution {
public:
    int findNumbers(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            int count=0;
            while(arr[i]>=1){
                count++;
                arr[i]/=10;
            }
            if(count%2==0) ans++;
        }
        return ans;
    }
};

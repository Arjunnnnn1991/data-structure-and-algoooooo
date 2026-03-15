class Solution {
public:
    int arraySign(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                return 0;
            }
            else if(arr[i]>0){
                arr[i]=1;

            }
            else {
                arr[i]=-1;
                ans++;
            }
        }
        if(ans%2==0) return 1;
        else return -1;
        
        
    }
};

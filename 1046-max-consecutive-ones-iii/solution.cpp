class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int changer=k;
        int i=0,j=0;
        int ans=0;
        int curans=0;
        while(j<arr.size()){
            if(arr[j]==1){
                j++;
                
            }
            else{
                if(changer>0){
                    changer--;
                    j++;
                    
                }
                else {
                    ans=max(j-i,ans);
                    while(arr[i]==1){
                        i++;
                    }
                    i++;
                    j++;
                }
            }
        }
        ans=max(j-i,ans);
        return ans;
           
    }
};

class Solution {
public:
    int maxSatisfied(vector<int>& arr, vector<int>& g, int m) {
       
       int ans=0;
       for(int i=0;i<arr.size();i++){
        if(g[i]==0) ans+=arr[i];
       }
       int cursome=0;
       int temp=0;
       int i=0,j=0;
       while(j<arr.size()){
        if(g[j]==1){
            cursome+=arr[j];
        }
        if(j-i>=m) {if(g[i]==1)cursome-=arr[i];
         i++;}
        temp=max(temp,cursome);
       
        j++;
       }
  
       return ans+temp;
    }
};

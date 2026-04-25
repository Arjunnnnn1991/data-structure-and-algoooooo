class Solution {
public:
int todo(vector<int>& arr, int k){
     int cur=0,ans=0,i=0,j=0;
        while(j<arr.size()){
            if(arr[j]%2==1){
                cur++;
            }
            while(cur>k&&j-i>=k-1){
                if(arr[i]%2==1) cur--;
                i++;
            }
        ans+=j-i+1;
            j++;
        }
        return ans;
}
    int numberOfSubarrays(vector<int>& arr, int k) {
      return todo(arr,k)-todo(arr,k-1);
    }
};

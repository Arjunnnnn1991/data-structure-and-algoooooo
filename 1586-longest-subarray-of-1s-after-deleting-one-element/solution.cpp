class Solution {
public:
int todo(vector<int>& arr,int k){
    int i=0,j=0,ans=0,cur=0;
    while(j<arr.size()){
        if(arr[j]==0)cur++;

        while(cur>k){
            if(arr[i]==0) cur--;
            i++;

        }
      ans=max(ans,j-i );
        j++;
    }
    return ans;
}
    int longestSubarray(vector<int>& arr) {
        //   int n=arr.size();
        //   int i=0,j=0,maxlen=INT_MIN,len=0;
        //   int flips=0;
        //   while(j<n){
        //     if(arr[j]==1) j++;
        //     else{
        //         if(flips<1){
        //             flips++;
        //             j++;
        //         }
        //         else{
        //             len=j-i;
        //             maxlen=(maxlen<len)?len:maxlen;
        //             while(arr[i]==1) i++;
        //             j++;
        //             i++;
        //         }
        //     }
        //     len=j-i;
        //     maxlen=(maxlen<len)?len:maxlen;
        //   }
        //   return maxlen-1;
        return todo(arr,1);
    }

};

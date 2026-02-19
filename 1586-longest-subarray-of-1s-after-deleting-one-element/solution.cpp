class Solution {
public:
    int longestSubarray(vector<int>& arr) {
          int n=arr.size();
          int i=0,j=0,maxlen=INT_MIN,len=0;
          int flips=0;
          while(j<n){
            if(arr[j]==1) j++;
            else{
                if(flips<1){
                    flips++;
                    j++;
                }
                else{
                    len=j-i;
                    maxlen=(maxlen<len)?len:maxlen;
                    while(arr[i]==1) i++;
                    j++;
                    i++;
                }
            }
            len=j-i;
            maxlen=(maxlen<len)?len:maxlen;
          }
          return maxlen-1;
    }

};

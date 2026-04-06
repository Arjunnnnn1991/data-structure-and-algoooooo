class Solution {
public:
    int numRescueBoats(vector<int>& arr, int l) {
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
      int count=0;
      while(i<=j){
        if(arr[i]+arr[j]<=l) {
            i++;
            j--;
            count++;
        }
        else{
            count++;
            j--;
        }
      }
        return count;
       

        
      
    }
};

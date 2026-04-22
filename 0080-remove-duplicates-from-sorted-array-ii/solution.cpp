class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int j=0,i=0;
        int count=arr.size();
        while(j<arr.size()){
            if(arr[i]==arr[j]){
                if(j-i<2) j++;
                else{
                    count--;
                    arr[j]=INT_MAX;
                    j++;
                }
            }
            else{
                i=j;
                j++;
            }
        }
       sort(arr.begin(),arr.end());
        return count;
    }
};

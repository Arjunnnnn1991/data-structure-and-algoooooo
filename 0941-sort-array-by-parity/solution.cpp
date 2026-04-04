class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int i=0;
        if(arr.size()==1) return arr;
        int j=arr.size()-1;
        while(i<j){
            if(arr[i]%2==0) i++;
            else if(arr[j]%2!=0)j--;
            else swap(arr[i],arr[j]);
        }
        // sort(arr.begin(),arr.begin()+j);
        return arr;
    }
};

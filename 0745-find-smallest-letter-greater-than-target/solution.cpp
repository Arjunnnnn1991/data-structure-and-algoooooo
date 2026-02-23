class Solution {
public:
    char nextGreatestLetter(vector<char>& arr1, char target) {
        vector<char> arr;
        int j=0;
        arr.push_back(arr1[0]);
        for(int i=1;i<arr1.size();i++){
           if(arr[j]!=arr1[i]) {arr.push_back(arr1[i]);
           j++;}
        }
        int low=0,high=arr.size()-1,mid;
        char ans=arr[0];
        bool found=false;
        while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==target&&(mid!=arr.size()-1)){
            ans=arr[mid+1];
            found=true;
            break;
        }
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
        }
        
        if(found) return ans;
        else if(!found && arr[arr.size()-1]<=target) return arr[0];
        else return arr[low];
        
    }
};

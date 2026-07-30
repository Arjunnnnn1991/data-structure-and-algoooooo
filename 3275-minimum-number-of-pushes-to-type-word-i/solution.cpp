class Solution {
public:
    int minimumPushes(string word) {
     vector<int> arr(27,0);
     for(auto x:word){
        arr[x-'a']++;
     }
     int ans=0;
     int have=0;
     sort(arr.begin(),arr.end());
    
     for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]!=0)have++;
       
        if(have<=8){
            ans+=arr[i];
        }
        else if(have<=16){
            ans+=2*arr[i];
        }
        else if(have<=24)ans+=3*arr[i];
        else ans+=4*arr[i];
     }
     return ans;
    }
};

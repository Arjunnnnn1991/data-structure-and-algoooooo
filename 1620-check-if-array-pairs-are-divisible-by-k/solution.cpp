class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
           int rem=((arr[i]%k)+k)%k;
            

          
            if(m.find(k-rem)!=m.end()&&m[k-rem]>0){
                m[k-rem]--;
            }
           
            // else if(m.find(-rem)!=m.end()&&m[-rem]>0){
            //     m[-rem]--;
            // }
            else{
               if(arr[i]%k!=0) m[rem]++;
               else m[k]++;
            }
        }
        for(auto x:m){
            if(x.second!=0) return false;
        }
        return true;
    }
};
// int rem;
//             if(arr[i]>=0)
//             rem=arr[i]%k;
//             else{
//             rem=-(abs(arr[i])%4);            
//             }

          
//             if(m.find(k-rem)!=m.end()&&m[k-rem]>0){
//                 m[k-rem]--;
//             }
//             else if(m.find(-k+rem-1)!=m.end()&&m[-k+rem-1]>0){
//                 m[-k+rem-1]--;
//             }
//             else if(m.find(-rem)!=m.end()&&m[-rem]>0){
//                 m[-rem]--;
//             }
//             else{
//                if(arr[i]%k!=0) m[rem]++;
//                else m[k]++;
//             }

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> arr={0,0,0};
        for(auto x:bills){
           if(x==5){
            arr[0]++;
            continue;
           }
           else if(x==10){
            if(arr[0]!=0){
                arr[0]--;
                arr[1]++;
                continue;
            }
            else return false;
           }
            else{
               if(arr[1]!=0&&arr[0]!=0){
                arr[1]--;
                arr[0]--;
                continue;
               }
               else if(arr[0]>=3) {
                arr[0]-=3;
                continue;
               }
               else return false;
            }
           }
            
        
        return true;
    }
};

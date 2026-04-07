class Solution {
public:
    int timeRequiredToBuy(vector<int>& arr, int k) {
        if(arr.size()==1) return arr[0];
        int time=0;
        while(arr[k]!=0){
            int i=0;
            while(i<arr.size()){
                if(i==k){
                    if(arr[k]-1==0) return ++time;
                    else{
                        arr[k]--;
                        time++;
                        i++;
                    }
                }
                else if(arr[i]==0){
                    i++;
                    continue;
                }
                else{
                    time++;
                    arr[i]--;
                    i++;
                }
            }
        }
        return time;
    }
};

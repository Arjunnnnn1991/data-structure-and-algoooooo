class Solution {
public:
bool checker(vector<int>& arr,int cap,int days){
    int x=0;
    int i=0;
    
    while(i<arr.size()){
        int temp=cap;
        if(cap<arr[i]) return false;
        while(true&&i<arr.size()){
            temp=temp-arr[i];
            if(temp>=0){
                 i++;
            }
            else break;
        }
        x++;    
    }
    if(x<=days) return true;
    else return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=0,mid=0;
        for(int i=0;i<weights.size();i++){
            high=high+weights[i];
        }
        int ans=high;
        if(days==1) return ans;
        while(high>=low){
            mid=low+(high-low)/2;
            if(checker(weights,mid,days)) {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;

        }
        return ans;
    }
};

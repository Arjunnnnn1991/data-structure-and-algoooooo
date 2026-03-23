class Solution {
public:
bool checker(vector<int> & arr,int mid,double hour){
    double count=0;
    for(int i=0;i<arr.size()-1;i++){
        int k= arr[i]/mid;
        if(arr[i]%mid!=0) k++;
        count+=k;
    }
    count+=(double)arr[arr.size()-1]/(double)mid;
    if(count<=hour) return true;
    else return false;
}
// bool checker(vector<int> &arr, int mid, double hour){
//     double count = 0;

//     for(int i = 0; i < arr.size() - 1; i++){
//         int k = arr[i] / mid;
//         if(arr[i] % mid != 0) k++;
//         count += k;
//     }

    
//     count += (double)arr[arr.size()-1] / mid;

//     return count <= hour;
// }
    int minSpeedOnTime(vector<int>& arr, double hour) {
        bool possy=false;
        double maxi=0;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,(double)arr[i]);
        }
        int low=1,high=1e7;
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            bool posi=checker(arr,mid,hour);
            if(posi){
                ans=mid;
                possy=true;
                high=mid-1;

            }
            else low=mid+1;
        }
        if(possy)return ans;
        else return -1;
        
    }
};

class Solution {
public:
bool checker(vector<int> & arr,long long total,long long mid){
    long long check=0;
    for(int i=0;i<arr.size();i++){
        check+=mid/arr[i];
    }
    return check>=total;
}
    long long minimumTime(vector<int>& time, long long totalTrips) {
        if(time.size()==1) return time[0]*totalTrips;
        long long low=1,high=0;
        long long mid;
        for(int i=0;i<time.size();i++){
            if(high<time[i]) high=time[i];
        }
        high*=totalTrips;
        long long ans=0;
        while(low<=high){
            mid=low+(high-low)/2;
            bool flag =checker(time,totalTrips,mid);
            if(flag){
                ans=(long long)mid;
                high=mid-1;
            }
            else low=mid+1;
        }
    return ans;
    }
};

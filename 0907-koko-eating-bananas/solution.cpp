class Solution {
public:
    bool check_me_daddy(int mid,vector<int> piles, int h){
        int n=piles.size(),m,i=0;
        long long count =0;
        for(int i=0;i<n;i++){
            if(piles[i]<=mid) count++;
            else if(piles[i]%mid==0) count+=(long long)(piles[i]/mid);
            else{ count+=(long long)(piles[i]/mid+1);}
        }
        if(count>(long long)h){
            return false;
        }
        else{return true;}

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max_worth_speed=INT_MIN;
        for(int i=0;i<n;i++){
            if (piles[i]>max_worth_speed){
                max_worth_speed=piles[i];
            }
        }
        int low=1,high=max_worth_speed,min_speed;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check_me_daddy(mid,piles,h)) {min_speed=mid;
            high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return min_speed;
    }
};

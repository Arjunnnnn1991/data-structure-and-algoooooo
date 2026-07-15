class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=1,eve=2;
        int odsum=0,evesum=0;
        while(n--){
            odsum+=odd;
            evesum+=eve;
            odd+=2;
            eve+=2;
        }
        int ans=1;
        for(int i=1;i<min(odsum,evesum)/2+1;i++){
            if(odsum%i==0&&evesum%i==0)ans=i;
        }
        return ans;
    }
};

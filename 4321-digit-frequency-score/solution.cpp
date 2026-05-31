class Solution {
public:
    int digitFrequencyScore(int n) {
    vector<int> arr(10,0);
        while(n){
            arr[n%10]++;
            n=n/10;
        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans+=i*arr[i];
        }
        return ans;
    }
};

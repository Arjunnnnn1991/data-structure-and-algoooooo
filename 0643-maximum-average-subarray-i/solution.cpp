class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int i=0,j=0;
        double maxi=INT_MIN;
        double cur=0;
        for(j;j<arr.size();j++){
            cur+=arr[j];
             if(j<k-1) continue;
            maxi=max(maxi,(double)cur/((double)(j-i+1)));
            cur-=arr[i++];
        }
        return maxi;
    }
};

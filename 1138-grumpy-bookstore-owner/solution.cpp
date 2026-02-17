class Solution {
public:
    int maxSatisfied(vector<int>& arr, vector<int>& grumpy, int minutes) {
        int ei=arr.size()-1,i=0,curans=0,maxans=0,j=minutes;
        for(i=0;i<=ei;i++){
            if(grumpy[i]==0){
                maxans+=arr[i];
            }
        }
        curans=maxans;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1){
                curans+=arr[i];
            }
        }
        i=0;
        maxans=max(curans,maxans);
        while(j<=ei){
            if(grumpy[j]==1){
                curans+=arr[j];
            }
            if(grumpy[i]==1){
                curans-=arr[i];
            }
            maxans=max(maxans,curans);
            j++;
            i++;
        }
        return maxans;


    }
};

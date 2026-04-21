class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int more=1;
        int cur=arr[0];
        for(int i=1;i<arr.size();i++){
            if(cur!=arr[i]){
                more--;
                if(more<=0 ){
                    cur=arr[i];
                    more=1;

                }
            }
            else more++;
        }
        return cur;
    }
};

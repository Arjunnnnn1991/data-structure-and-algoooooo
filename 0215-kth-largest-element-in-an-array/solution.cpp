class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int maxi=nums[0];
        // for(int i=0;i<nums.size();i++){
        //     if(maxi<nums[i]){
        //         maxi=nums[i];
        //     }
        // }
        // vector<int> helper(maxi+1,0);
        // for(int i=0;i<nums.size();i++){
        //     helper[nums[i]]++;
        // }
        // int suppo=k,j=maxi;
        // while(suppo>0){
        //     if(helper[j]==0){
        //         j--;
        //     }
        //     else{
        //         helper[j]--;
        //         suppo--;
        //     }
        // }
        // return j;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k)pq.pop();
        }
        return pq.top();
    }
};

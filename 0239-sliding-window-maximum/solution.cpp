#include <deque>
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>q;
        vector<int> ans;
        int i=0;
        for(i=0;i<nums.size();i++){
            while(!q.empty()&&nums[i]>nums[q.back()]) q.pop_back();
            q.push_back(i);
            while(q.size()!=0&&q.front()<i-k+1) q.pop_front();
            if(i>=k-1)ans.push_back(nums[q.front()]);
            
        }
        return ans;
    }
};

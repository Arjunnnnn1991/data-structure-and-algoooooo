class KthLargest {
public:
priority_queue<int> mini;
priority_queue<int,vector<int>,greater<int>>maxi;
int lim;
    KthLargest(int k, vector<int>& nums) {
        for(auto x:nums){
            maxi.push(x);
        }
        while(maxi.size()>k){
            mini.push(maxi.top());
            maxi.pop();
        }
        lim=k;
    }
    
    int add(int val) {
        if(maxi.size()<lim||val>maxi.top()){
            maxi.push(val);
        }
        else{
            mini.push(val);
        }
        while(maxi.size()>lim){
            mini.push(maxi.top());
            maxi.pop();
        }
        return maxi.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

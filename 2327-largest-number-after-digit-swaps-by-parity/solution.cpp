class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        priority_queue<int> eve;
        priority_queue<int> odi;
        while(num){
            int x=num%10;
            num/=10;
            if(x%2==0)eve.push(x);
            else odi.push(x);
        }
       
        int ans=0;
        for(auto x:s){
            if((x-'0')%2==0){
                ans*=10;
                ans+=eve.top();
                eve.pop();
            }
            else {
                ans*=10;
                ans+=odi.top();
                odi.pop();
            }
        }
        return ans;
    }
};

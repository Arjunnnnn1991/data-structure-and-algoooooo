class Solution {
public:
int doit(int a){
    int summ=0;
    while(a){
        summ+=a%10;
        a=a/10;
    }
    return summ;
}
    int minElement(vector<int>& nums) {
        int curmini=INT_MAX;
        for(auto x:nums){
            int f=doit(x);
            curmini=min(f,curmini);
            if(curmini==1) return 1;
        }
        return curmini;
    }
};

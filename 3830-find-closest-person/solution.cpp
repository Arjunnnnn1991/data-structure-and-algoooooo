class Solution {
public:
    int findClosest(int x, int y, int z) {
        int t1=abs(z-y);
        int t2=abs(z-x);
        if(t1>t2) return 1;
        else if(t1<t2) return 2;
        else return 0;
    }
};

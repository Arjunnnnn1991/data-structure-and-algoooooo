class Solution {
public:
    int distMoney(int money, int children) {
       money -= children;
        if (money < 0) return -1;

        int count7 = money / 7;
        int rem = money % 7;

        if (count7 == children && rem == 0) return count7;
        if (count7 == children - 1 && rem == 3) return count7 - 1;
        return min(children - 1, count7);
    }
};

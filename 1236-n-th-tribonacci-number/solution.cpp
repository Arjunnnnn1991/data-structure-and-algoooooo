class Solution {
public:
int solver(vector<int> &memory,int n){
     if(n==0) return 0;
    else if(n==1||n==2) return 1;
    
    else if(memory[n]!=-1) return memory[n];
    memory[n]=solver(memory,n-1)+solver(memory,n-2)+solver(memory,n-3);
    return memory[n];
}
    int tribonacci(int n) {
        vector<int> memory(n+1,-1);
        return solver(memory,n);
    }
};

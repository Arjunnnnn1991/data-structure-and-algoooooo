class Solution {
public:
int move(vector<int> &memory,int n,vector<int>&arr){
    if(n==arr.size()-1){
        return arr[arr.size()-1];
    }
    else if(n==arr.size()-2) return arr[arr.size()-2];
    else if(n>=arr.size()) return 0;
    if(memory[n]!=-1) return memory[n];
    int x=move(memory,n+2,arr);
    int y=move(memory,n+3,arr);
    memory[n]=max(x,y)+arr[n];
    int z=move(memory,n+4,arr);
    memory[n+1]=max(y,z)+arr[n+1];
    return max(memory[n],memory[n+1]);
}
    int rob(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        else if(arr.size()==2) return (arr[0]>arr[1])? arr[0]:arr[1];
       vector<int> memory(arr.size(),-1);
       return move(memory,0,arr);
        // return max(memory[memory.size()-1],memory[memory.size()-2]);
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int write=0, read=0;
        while(read<arr.size()){
            if(arr[read]!=0){
                arr[write]=arr[read];
                // arr[read]=0;
                write++;
            }
            read++;
        }
        for(write;write<arr.size();write++){
            arr[write]=0;
        }
        return;
    }
};

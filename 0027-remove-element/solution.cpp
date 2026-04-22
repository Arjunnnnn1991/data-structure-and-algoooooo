class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int write=0,read=0;
        while(read<arr.size()){
            if(arr[read]!=val){
                arr[write]=arr[read];
                write++;
            }
            read++;
        }
        return write;
    }
};

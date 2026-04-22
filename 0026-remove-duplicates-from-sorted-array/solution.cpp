class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int write=0;
        int read=0;
        for(read;read<arr.size();read++){
            if(write<1||arr[read]!=arr[write-1]){
                arr[write++]=arr[read];
            }
        }
        return write;
    }
};

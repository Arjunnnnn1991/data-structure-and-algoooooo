class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
       
        int read=0,write=0;
        while(read<nums.size()){
            if(write<k||nums[read]!=nums[write-k]){
                nums[write]=nums[read];
                write++;
            }
            read++;
        }
        nums.resize(write);
        return nums;
     
    }
};

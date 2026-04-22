class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int carry=0;
        arr[arr.size()-1]++;
        if(arr[arr.size()-1]<=9) return arr;
        else{
            for(int i=arr.size()-1;i>0;i--){
                if(arr[i]>9){
                    int x=arr[i]/10;
                    arr[i]%=10;
                    arr[i-1]+=x;
                }
                else return arr;
            }
            if(arr[0]<=9) return arr;
            else{
                arr.push_back(0);
                for(int i=arr.size()-1;i>0;i--){
                    arr[i]=arr[i-1];
                }
                arr[0]=1;
                arr[1]%=10;
                return arr;
            }

        }
        return arr;
    }
};

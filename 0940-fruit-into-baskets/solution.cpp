class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int fa=0,fb=0,i=0,j=0,ans=0,a=0,b=-1;
        for(int w=0;w<arr.size();w++){
            if(arr[w]!=arr[0]){
                b=arr[w];
                break;
            }
        }
        if(b==-1) return arr.size();
        if(arr.size()==1) return 1;
        else if(arr.size()==2) return 2;
        a=arr[0],b=arr[1],j=0;
        ans=2;
        while(j<arr.size()){
            int k=arr[j];
            if(k==a){
                fa++;
            }
            else if(k==b) fb++;
            else{
                while(fa!=0&&fb!=0&&i<j){
                    if(arr[i]==a) fa--;
                    else if(arr[i]==b) fb--;
                    i++;
                }
                if(fa==0){
                    a=arr[j];
                    fa++;
                }
                else {b=arr[j];
                fb++;
                }
            }
            ans=max(ans,fa+fb);
            j++;
        }
        return ans;
    }
};

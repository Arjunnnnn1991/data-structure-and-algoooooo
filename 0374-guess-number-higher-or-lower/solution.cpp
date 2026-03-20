/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=0,high=n,mid;
        if(n==1) return 1;
        while(high>=low){
            mid=low+(high-low)/2;
            int c=guess(mid);
            if(c==0)  return mid;
            
            else if(c==-1) high=mid-1;
            else low=mid+1;
        }
        return 0;
    }
};

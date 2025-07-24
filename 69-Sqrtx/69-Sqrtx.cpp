// Last updated: 7/25/2025, 1:49:58 AM
class Solution {
public:
    int mySqrt(int x) {
        int s=1,e=x;
        int ans=0;
        if(x==1 || x==0){
            return x;
        }
        while(s<=e){
            int mid=s+(e-s)/2;
            if(mid<=x/mid){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};
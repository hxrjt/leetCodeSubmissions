// Last updated: 8/16/2025, 1:57:37 PM
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1,j=n;
        int mid=i+(j-i)/2;
        int temp;
        while(i<=j){
            if(isBadVersion(mid)==true){
                temp=mid;
                j=mid-1;
            }
            else if(isBadVersion(mid)==false && isBadVersion(j)==true){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            mid=i+(j-i)/2;
        }
        return temp;
    }
};
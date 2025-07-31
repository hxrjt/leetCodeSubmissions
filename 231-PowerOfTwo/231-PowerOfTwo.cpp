// Last updated: 7/31/2025, 10:16:16 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0&&(n&(n-1))==0){
            return true;
        }
        return false;
    }
};
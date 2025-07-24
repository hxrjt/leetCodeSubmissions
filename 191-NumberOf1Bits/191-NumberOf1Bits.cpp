// Last updated: 7/25/2025, 1:49:34 AM
class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n){
            if(n&1){
                count++;
            }
            n>>=1;
        }
        return count;
    }
};
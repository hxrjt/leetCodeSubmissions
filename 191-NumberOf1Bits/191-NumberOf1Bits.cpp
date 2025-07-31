// Last updated: 7/31/2025, 10:16:23 PM
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
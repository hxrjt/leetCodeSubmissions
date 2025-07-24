// Last updated: 7/25/2025, 1:49:37 AM
class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        for(int i=5;i<=n;i=i*5){
            ans=ans+n/i;
        }
        return ans;
    }
};
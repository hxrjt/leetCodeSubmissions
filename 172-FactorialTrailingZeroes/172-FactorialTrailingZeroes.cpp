// Last updated: 7/31/2025, 10:16:32 PM
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
// Last updated: 7/31/2025, 10:15:27 PM
class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0,ans=0;
        for(char i:s){
            if(i=='L'){
                l++;
            }
            else{
                r++;
            }

            if(l==r){
                ans++;
            }
        }
        return ans;
    }
};
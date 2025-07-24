// Last updated: 7/25/2025, 1:48:52 AM
class Solution {
public:
    int minChanges(string s) {
        int ans=0;
        for(int i=0;i<s.length()-1;i=i+2){
            if(s[i]!=s[i+1]){
                ans++;
            }
        }
        return ans;
    }
};
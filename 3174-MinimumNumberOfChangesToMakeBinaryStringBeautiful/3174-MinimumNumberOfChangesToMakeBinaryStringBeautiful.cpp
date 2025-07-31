// Last updated: 7/31/2025, 10:15:00 PM
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
// Last updated: 7/31/2025, 10:15:56 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int count=0;
        for(int k=0;k<t.size();k++){
            if(s[i]==t[k]){
                count++;
                i++;
            }
        }
        
        return count==s.size()?true:false;
    }
};
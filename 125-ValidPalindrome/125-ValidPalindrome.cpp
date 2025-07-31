// Last updated: 7/31/2025, 10:16:46 PM
class Solution {
    private:
    bool valid(char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
public:
    bool isPalindrome(string s) {
        string ans;
        int i=0;
        if(s.size()==1){
            return true;
        }
        while(i<=s.size()-1){
            char ch=s[i];
            if(valid(ch)){
                ans.push_back(tolower(ch));
                i++;
            }
            else{
                i++;
            }
        }
        i=0;
        int j=ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
};
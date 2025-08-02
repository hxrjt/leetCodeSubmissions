// Last updated: 8/2/2025, 6:54:49 PM
class Solution {
public:
    bool isValid(char s){
        char c=tolower(s);
        if((c>='a' && c<='z') || (c>='0' && c<='9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        if(s.size()==0){
            return false;
        }

        string temp="";
        for(char c:s){
            if(isValid(c)){
                temp+=tolower(c);
            }
            else{
                continue;
            }
        }
        int i=0,j=temp.size()-1;
        while(i<j){
            if(temp[i]!=temp[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
};
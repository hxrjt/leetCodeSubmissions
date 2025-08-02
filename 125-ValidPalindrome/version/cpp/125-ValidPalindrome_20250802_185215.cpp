// Last updated: 8/2/2025, 6:52:15 PM
class Solution {
public:
    bool isValid(char c){
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
            char tempc=tolower(c);
            if(isValid(tempc)){
                temp+=tempc;
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
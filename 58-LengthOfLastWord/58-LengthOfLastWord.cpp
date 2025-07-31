// Last updated: 7/31/2025, 10:17:01 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int e=s.size()-1; 
        int count=0;
        while(e>=0){
            if(s[e]==' '){
                e--;
            }
            else{
                break;
            }
        }
        while(e>=0 && s[e]!=' '){
            count++;
            e--;
        }
        return count;
    }
};
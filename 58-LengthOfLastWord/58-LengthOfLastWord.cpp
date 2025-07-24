// Last updated: 7/25/2025, 1:50:02 AM
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
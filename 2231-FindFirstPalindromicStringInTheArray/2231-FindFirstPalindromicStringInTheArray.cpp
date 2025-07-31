// Last updated: 7/31/2025, 10:15:06 PM
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int size=words.size();
        for(int i=0;i<size;i++){
            int stringSize=words[i].size();
            int s=0,e=stringSize-1;
            bool flag=true;
            while(s<=e){
                if (words[i][s]!=words[i][e]){
                    flag=false;
                }
                s++,e--;
            }
            if (flag){
                return words[i];
            }
        }
        return "";
    }
};
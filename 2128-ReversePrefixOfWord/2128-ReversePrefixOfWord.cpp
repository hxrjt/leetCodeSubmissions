// Last updated: 8/16/2025, 1:56:54 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0,j=0;
        while(j<word.size()){
            if(word[j]==ch){
                break;
            }
            j++;
        }
        if(word[j]!=ch){
            return word;
        }
        while(i<j){
            swap(word[i],word[j]);
            i++,j--;
        }
        return word;
    }
};
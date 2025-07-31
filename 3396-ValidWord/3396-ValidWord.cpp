// Last updated: 7/31/2025, 10:14:53 PM
class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3){
            return false;
        }
        unordered_set<char> vow={'a','e','i','o','u','A','E','I','O','U'};
        int vowel=0,consonent=0,digit=0;
        for(int i=0;i<word.size();i++){
            if(isdigit(word[i])){
                digit++;
            }
            else if(isalpha(word[i]) && (vow.find(word[i])!=vow.end())){
                vowel++;
            }
            else if(isalpha(word[i])){
                consonent++;
            }
            else{
                return false;
            }
        }
        if(vowel && consonent){
            return true;
        }
        return false;
    }
};
// Last updated: 9/16/2025, 12:21:48 AM
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> words;
        unordered_set<char> mp;
        string temp="";
        for(char c:text){
            if(c==' '){
                words.push_back(temp);
                temp="";
            }
            else{
                temp+=c;
            }
        }
        words.push_back(temp);
        for(char c:brokenLetters){
            mp.insert(c);
        }
        int count=0;
        for(int i=0;i<words.size();i++){
            bool type=true;
            for(char c:words[i]){
                if(mp.find(c)!=mp.end()){
                    type=false;
                    break;
                }
            }
            if(type){
                count++;
            }
        }
        return count;
    }
};
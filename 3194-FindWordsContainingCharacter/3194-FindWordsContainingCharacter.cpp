// Last updated: 7/31/2025, 10:14:51 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};
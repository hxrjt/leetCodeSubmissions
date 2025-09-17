// Last updated: 9/17/2025, 11:56:17 PM
class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        string ans="";
        bool space=false;
        s.erase(s.begin(),s.begin()+i);
        for(char c:s){
            if(c==' '){
                space=true;
            }
            else{
                if(space){
                    ans+=' ';
                    space=false;
                }
                ans+=c;
            }
        }
        reverse(ans.begin(),ans.end());
        i=0;
        cout<<ans;
        for(int j=0;j<=ans.size();j++){
            if(j==ans.size() || ans[j]==' '){
                reverse(ans.begin()+i,ans.begin()+j);
                i=j+1;
            }
        }
        return ans;
    }
};
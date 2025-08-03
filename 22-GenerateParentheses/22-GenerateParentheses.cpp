// Last updated: 8/3/2025, 11:03:42 PM
class Solution {
public:
    void recur(vector<string> &ans,int n,string &s,int nOpen,int nClose){
        if(nOpen==n && nClose==n){
            ans.push_back(s);
            return ;
        }
        if(nOpen<n){
            s+="(";
            recur(ans,n,s,nOpen+1,nClose);
            s.pop_back();
        }
        if(nOpen>nClose){
            s+=")";
            recur(ans,n,s,nOpen,nClose+1);
            s.pop_back();
        }
            

    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> ans;
        recur(ans,n,s,0,0);
        return ans;
        
    }
};
// Last updated: 8/15/2025, 12:49:19 AM
class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        stack<char> st;
        while(i<s.length()){
            if(!st.empty() && st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
        }
        string ans="";
        char temp;
        while(!st.empty()){
            temp=st.top();
            ans+=temp;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
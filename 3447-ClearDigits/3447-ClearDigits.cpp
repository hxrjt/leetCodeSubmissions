// Last updated: 7/25/2025, 1:48:49 AM
class Solution {
public:
    string clearDigits(string s) {
        stack<int> st;
        int i=0;
        while(i<s.size()){
            if(s[i]<='9' && s[i]>='0'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
            i++;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
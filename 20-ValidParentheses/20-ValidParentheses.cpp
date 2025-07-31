// Last updated: 7/31/2025, 10:17:19 PM
class Solution {
public:
    bool isValid(string s) {
        stack<int> mystack;
        int i = 0;
        while (i < s.size()) {
            if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) {
                mystack.push(s[i]);
            } 
            else{
                if(mystack.empty()){
                    return false;
                }

                else if((mystack.top()=='{' && s[i]=='}') || 
                    (mystack.top()=='[' && s[i]==']') || 
                    (mystack.top()=='(' && s[i]==')')){
                mystack.pop();
                    }
                    else{
                        return false;
                    }
            }
            i++;
        }
        return mystack.empty();
    }
};
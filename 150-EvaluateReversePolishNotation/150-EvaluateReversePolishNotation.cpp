// Last updated: 8/3/2025, 5:06:59 PM
class Solution {
public:
    bool isOperator(string s){
        if(s=="+" || s=="-" || s=="*" || s=="/"){
            return true;
        }
        return false;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> temp;
        int ans;
        for(string s:tokens){
            if(isOperator(s)){
                int op2=temp.top();temp.pop();
                int op1=temp.top();temp.pop();
                if(s=="+"){
                    temp.push(op1+op2);
                }
                if(s=="-"){
                    temp.push(op1-op2);
                }
                if(s=="/"){
                    temp.push(op1/op2);
                }
                if(s=="*"){
                    temp.push(op1*op2);
                }
            }
            else{
                temp.push(stoi(s));
            }
        }
        return temp.top();
    }
};
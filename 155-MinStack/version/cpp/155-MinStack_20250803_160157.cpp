// Last updated: 8/3/2025, 4:01:57 PM
class MinStack {
    private:
    int topElement;
    vector<int> mystack;
public:
    MinStack() {
        topElement=-1;
    }
    
    void push(int val) {
        mystack.push_back(val);
        topElement++;
    }
    
    void pop() {
        mystack.pop_back();
        topElement--;
    }
    
    int top() {
        return mystack[topElement];
    }
    
    int getMin() {
        int min=INT_MAX;
        for(int i=0;i<mystack.size();i++){
            int curMin=mystack[i];
            if(min>curMin){
                min=curMin;
            }
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
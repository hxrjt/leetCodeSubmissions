// Last updated: 9/19/2025, 12:41:43 AM
class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==0 || n==1){
            return {0};
        }
        vector<int> ans;
        int i=n;
        if(n%2){
            while(i!=1){
                ans.push_back(i);
                ans.push_back(-i);
                i-=2;
            }
            ans.push_back(0);
        }
        else{
            while(i){
                ans.push_back(i);
                ans.push_back(-i);
                i-=2;
            }
        }
        return ans;
    }
};
// Last updated: 8/16/2025, 1:31:04 PM
class Solution {
public:
    int maximum69Number (int num) {
        vector<int> ref;
        int ans=0;
        while(num){
            ref.push_back(num%10);
            num=num/10;
        }
        reverse(ref.begin(),ref.end());
        for(int i=0;i<ref.size();i++){
            if(ref[i]==6){
                ref[i]=9;
                break;
            }
        }
        for(int i=0;i<ref.size();i++){
            ans=ans*10+ref[i];
        }
        return ans;
    }
};
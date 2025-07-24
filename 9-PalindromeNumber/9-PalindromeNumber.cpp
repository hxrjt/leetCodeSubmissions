// Last updated: 7/25/2025, 1:50:20 AM
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        vector<int> nums;
        while(x){
            int k=x%10;
            x=x/10;
            nums.push_back(k);
        }
        int s=0,e=nums.size()-1;
        while(s<e){
            if(nums[s++]!=nums[e--]){
                return false;
            }
        }
        return true;
    }
};
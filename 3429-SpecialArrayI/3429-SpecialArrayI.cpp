// Last updated: 7/25/2025, 1:48:48 AM
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1){
            return true;
        }
        for(int i=0;i<nums.size()-1;i++){
            if ((nums[i]%2==0) && (nums[i+1]%2==0)){
                return false;
            }
            else if((nums[i]%2!=0) && (nums[i+1]%2!=0)){
                return false;
            }
        }
        return true;
    }
};
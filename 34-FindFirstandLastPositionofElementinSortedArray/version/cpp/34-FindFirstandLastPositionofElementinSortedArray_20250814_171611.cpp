// Last updated: 8/14/2025, 5:16:11 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        if(nums.size()==0){
            return {-1,-1};
        }
        while(i<j){
            if(nums[i]!=target){
                i++;
            }
            else if(nums[j]!=target){
                j--;
            }
            else{
                break;
            }
        }
        if(i>=j && nums[i]!=target && nums[j]!=target){
            return {-1,-1};
        }
        return {i,j};
    }
};
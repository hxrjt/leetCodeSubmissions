// Last updated: 8/13/2025, 3:40:49 PM
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        int count=0;
        while(i<j){
            if(nums[i]+nums[j]>=target){
                j--;
            }
            else{
                count+=(j-i);
                i++;
            }
        }
        return count;
    }
};
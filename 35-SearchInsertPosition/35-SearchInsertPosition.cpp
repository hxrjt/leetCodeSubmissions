// Last updated: 7/25/2025, 1:50:06 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return s;
    }
};
// Last updated: 7/25/2025, 1:49:10 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
};
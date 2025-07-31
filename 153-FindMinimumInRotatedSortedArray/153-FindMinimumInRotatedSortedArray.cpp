// Last updated: 7/31/2025, 10:16:39 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>nums[e]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return nums[mid];
    }
};
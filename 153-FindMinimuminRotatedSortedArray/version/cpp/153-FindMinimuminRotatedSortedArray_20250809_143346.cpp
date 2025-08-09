// Last updated: 8/9/2025, 2:33:46 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        if(i==j){
            return nums[i];
        }
        int mid=i+(j-i)/2;
        while(i<j){
            if(nums[mid]>nums[j]){
                i=mid+1;
            }
            else{
                j=mid;
            }
            mid=i+(j-i)/2;
        }
        return nums[mid];
    }
};
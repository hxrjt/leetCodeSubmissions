// Last updated: 7/31/2025, 10:17:08 PM
class Solution {
    private:
    int firstOccurence(vector<int>& nums, int target){
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]>=target){
                e=mid-1;
            }
            else{

                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        if(s<nums.size() && nums[s]==target){
            return s;
        }
        else{
            return -1;
        }
    }

    int lastOccurence(vector<int>& nums,int target){
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]<=target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        if(e<nums.size() && nums[e]==target){
            return e;
        }
        else{
            return -1;
        }
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1=-1,ans2=-1;
        vector<int> ans;
        ans1=firstOccurence(nums,target);
        ans2=lastOccurence(nums,target);
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
// Last updated: 8/3/2025, 5:09:02 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> temp;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size();k++){
            if(k>0 and nums[k]==nums[k-1]) continue;
            int i=k+1,j=nums.size()-1;
            int target=-nums[k];
            while(i<j){
                if(nums[i]+nums[j]==target){
                    temp.insert({nums[k],nums[i],nums[j]});
                }
                if(nums[i]+nums[j]<target){
                    i++;
                }
                else{
                    j--;
                }
            }
        }
        vector<vector<int>> ans;
        for(auto i:temp){
            ans.push_back(i);
        }
        return ans;
    }
};
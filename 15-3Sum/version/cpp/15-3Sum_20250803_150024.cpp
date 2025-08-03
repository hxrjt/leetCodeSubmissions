// Last updated: 8/3/2025, 3:00:24 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> temp;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size();k++){
            int i=k+1,j=nums.size()-1;
            int target=-nums[k];
            while(i<j){
                if(i==k) i++;
                if(j==k) j--;
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
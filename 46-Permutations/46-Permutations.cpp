// Last updated: 7/25/2025, 1:50:04 AM
class Solution {
private:
void permutation(vector<vector<int>>& ans,vector<int> nums,int index){
    if(index==nums.size()-1){
        ans.push_back(nums);
        return;
    }
    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        permutation(ans,nums,index+1);
        // backtrack
        swap(nums[index],nums[j]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        permutation(ans,nums,index);
        return ans;
    }
};
// Last updated: 7/25/2025, 1:49:55 AM
class Solution {
private:
void powerSet(vector<int>& nums,int index,vector<vector<int>>& ans,vector<int>& output){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }

    // exclude
    powerSet(nums,index+1,ans,output);

    // include
    output.push_back(nums[index]); 
    powerSet(nums,index+1,ans,output);
    output.pop_back();
}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        powerSet(nums,index,ans,output);
        return ans;
    }
};
// Last updated: 7/25/2025, 1:49:30 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])!=map.end()){
                return true;
            }
            map[nums[i]]++;
        }
        return false;
    }
};
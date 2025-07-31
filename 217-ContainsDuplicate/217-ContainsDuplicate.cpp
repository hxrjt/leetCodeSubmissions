// Last updated: 7/31/2025, 10:16:17 PM
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
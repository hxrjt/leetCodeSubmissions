// Last updated: 8/1/2025, 4:52:38 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        vector<int> temp;
        for(auto &i:s){
            temp.push_back(i);
        }
        int maxSize=1;
        int curSize=1;
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i]+1==temp[i+1]){
                curSize++;
            }
            else{
                curSize=1;
            }
            maxSize=max(curSize,maxSize);
        }
        return maxSize;

    }
};
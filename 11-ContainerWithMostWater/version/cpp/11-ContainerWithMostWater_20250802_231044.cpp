// Last updated: 8/2/2025, 11:10:44 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxArea=INT_MIN;
        while(i<j){
            int currArea=(j-i)*min(height[j],height[i]);
            maxArea=max(maxArea,currArea);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxArea;
    }
};
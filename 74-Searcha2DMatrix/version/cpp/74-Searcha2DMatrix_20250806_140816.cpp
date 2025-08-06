// Last updated: 8/6/2025, 2:08:16 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();
        int i=0,j=(row*col)-1;
        int mid=i+(j-i)/2;
        while(i<=j){
            if(matrix[mid/col][mid%col]==target){
                return true;
            }
            else if(matrix[mid/col][mid%col]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
            mid=i+(j-i)/2;
        }
        return false;
    }
};
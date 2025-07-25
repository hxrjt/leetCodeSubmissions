// Last updated: 7/25/2025, 1:49:59 AM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1, j = 0;
        if (digits[j] == 0) {
            digits[i]++;
            return digits;
        } 
        else {
            while (i >= j && digits[i] == 9) {
                digits[i--] = 0;
            }
            if (digits[j] == 0) {
                digits[j] = 1;
                digits.push_back(0);
            } else {
                digits[i]++;
            }
        }
        return digits;
    }
};
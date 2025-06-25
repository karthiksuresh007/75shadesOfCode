class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};



// ✅ Problem: Plus One (Leetcode #66)
// 🔗 Link: https://leetcode.com/problems/plus-one/
// 📌 Topic: Arrays, Math
// 👨‍💻 Approach:
// 1. Start from the last digit and move backwards
// 2. If the digit is less than 9, increment it and return the result
// 3. If the digit is 9, set it to 0 and continue (carry forward)
// 4. If all digits are 9 (e.g., 999 → 1000), insert 1 at the beginning
// ⏱️ Time: O(n), Space: O(1) [ignoring output array]

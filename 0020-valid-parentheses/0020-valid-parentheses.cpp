class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> pairs = {
            {')', '('}, 
            {']', '['}, 
            {'}', '{'}
        };

        for (char ch : s) {
            if (pairs.count(ch)) {
                if (st.empty() || st.top() != pairs[ch]) return false;
                st.pop();
            } else {
                st.push(ch);
            }
        }

        return st.empty();
    }
};




// ✅ Problem: Valid Parentheses (Leetcode #20)
// 🔗 Link: https://leetcode.com/problems/valid-parentheses/
// 📌 Topic: Stack, String, HashMap
// 👨‍💻 Approach:
// 1. Use a stack to track opening brackets
// 2. Use a hashmap to match closing brackets with their corresponding opening ones
// 3. Iterate through the string:
//    - If it's a closing bracket, check if the stack is empty or doesn't match the expected opening bracket → return false
//    - If it's an opening bracket, push it onto the stack
// 4. At the end, the stack should be empty if all brackets matched correctly
// ⏱️ Time: O(n), Space: O(


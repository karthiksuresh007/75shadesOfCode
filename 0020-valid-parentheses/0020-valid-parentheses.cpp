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
class Solution {
public:
    int solve(int n, vector<int>& dp) {
        if(n ==1) return 1;
        if(n == 2) return 2;

        if(dp[n] != -1) return dp[n];
        dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
        return dp[n];
    }

    
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }
};



// ✅ Problem: Climbing Stairs (Leetcode #70)
// 🔗 Link: https://leetcode.com/problems/climbing-stairs/
// 📌 Topic: Dynamic Programming, Recursion, Memoization
// 👨‍💻 Approach:
// 1. Use recursion to solve the problem based on the relation: ways(n) = ways(n-1) + ways(n-2)
// 2. Base Cases:
//    - If n == 1 → return 1
//    - If n == 2 → return 2
// 3. Use a DP array (memoization) to store already computed results to avoid recomputation
// 4. Top-down recursive calls with memoization improve time from O(2^n) to O(n)
// ⏱️ Time: O(n), Space: O(n) [DP array + recursion stack]

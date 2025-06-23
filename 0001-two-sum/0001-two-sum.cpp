class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> num_map;
        for(int i=0; i<nums.size(); i++) {
            int compliment = target - nums[i];
             if (num_map.find(compliment) != num_map.end()){
                return{num_map[compliment], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};



// ✅ Problem: Two Sum (Leetcode #1)
// 🔗 Link: https://leetcode.com/problems/two-sum/
// 📌 Topic: Arrays, HashMap
// 👨‍💻 Approach:
// 1. Initialize a hash map to store each number and its index
// 2. Iterate through the array and calculate the complement (target - current element)
// 3. If the complement exists in the map, return both indices
// 4. Otherwise, store the current number and its index in the map
// ⏱️ Time: O(n), Space: O(n)

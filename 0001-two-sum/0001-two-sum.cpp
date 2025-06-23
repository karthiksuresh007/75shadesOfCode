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
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++) {
            int need = target - nums[i];
            if (ump.count(need)) {
                return {ump[need], i};
            }
            ump[nums[i]] = i;
        }
    }
};

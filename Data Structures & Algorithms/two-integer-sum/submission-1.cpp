class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++) {
            int need = target - nums[i];
            if (ump.count(need)) {
                ans.push_back(need);
                ans.push_back(i);
                break;
            }
            ump[nums[i]]++;
        }
        ans[0] = find(nums.begin(), nums.end(), ans[0]) - nums.begin();
        return ans;
    }
};

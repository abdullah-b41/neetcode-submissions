class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int>ump;
        for(auto &i:nums)
        {
            ump[i]++;
        }
        vector<pair<int,int>>v;
        for(auto &[x,y]:ump)
        {
            v.push_back({y,x});
        }
        sort(v.begin(),v.end(),greater<>());
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};

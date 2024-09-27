class Solution {
public:
    void sub(int n, vector<int> nums, vector<int> &p, set<vector<int>> &ans)
    {
        if(n == nums.size())
        {
            if(p.size() == 3 && accumulate(p.begin(),p.end(),0) == 0)
            {
                sort(p.begin(),p.end());
                ans.insert(p);
            }
            return;
        }
        p.push_back(nums[n]);
        sub(n+1,nums,p,ans);
        p.pop_back();
        sub(n+1,nums,p,ans);
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> p;
        set<vector<int>> ans;
        vector<vector<int>> v;
        sub(0,nums,p,ans);
        for(auto pr: ans) v.push_back(pr);
        return v;
    }
};
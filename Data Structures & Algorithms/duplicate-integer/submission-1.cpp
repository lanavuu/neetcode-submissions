class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> track;
        for (int i = 0; i < nums.size(); ++i)
        {
            track[nums[i]]++;
            if (track[nums[i]] > 1)
            {
                return true;
            }

        }
        return false;
    }
};
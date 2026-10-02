class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> track;
        //lets store the indices in the key.
        for (int i = 0; i < nums.size(); ++i)
        {
            int difference = target - nums[i];
            if (track.contains(difference))
            {
                return {track[difference], i};
            }
            track[nums[i]] = i;
        }
        return {};
    }
};

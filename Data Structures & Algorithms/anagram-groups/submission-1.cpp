class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> result;
        std::map<std::vector<int>, std::vector<std::string>> track;

        for (std::string &s : strs)
        {
            std::vector<int> freq(26, 0);
            for (char &ch : s)
            {
                freq[ch - 'a']++;
            }
            track[freq].push_back(s);
        }
        for (auto &it : track)
        {
            result.push_back(it.second);
        }
        return result;
    }
};

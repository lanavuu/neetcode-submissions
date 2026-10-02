class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> first_string;
        map<char, int> second_string;


        for (int i = 0; i < s.length();++i)
        {
            first_string[s[i]]++;
            
            
        }
        for (int j = 0; j < t.length(); ++j)
        {
            second_string[t[j]]++;

        }

        
    return first_string==second_string;
        
    }
};

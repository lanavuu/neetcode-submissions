class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // this is a VECTOR of a VECTOR that holds strings
        std::vector<std::vector<std::string>> res;
        // this is a ordered tree that has key of VECTORS OF INTS and value VECTOR OF STRINGS
        std::map<std::vector<int>, std::vector<std::string>> track;

        // go through each string in the vector
        for (std::string &s : strs)
        {
            //create a vector of ints ranging from 0-26 and initialize them as 0s
            //we use this to create a freq table
            std::vector<int> freq (26,0);
            // go through each character in the string ``strs``
            for (char &ch : s)
            {
                //machine see 'a' = 97.. 'z' = 122 
                //this creates the fingerprnts of the string
                freq[ch - 'a']++;
            }
            // find if this fingerprint/freq table exists or not, push the string ``s`` as the value
            // to store it in the list with its matching freq table
            track[freq].push_back(s);
        }
        // go through each key, val pair in ``track``
        for (auto &it : track)
        {
            //push the values (list of strings in this case) into the vector of a vector that holds
             //strings, this allows us to create the sublists
            res.push_back(it.second);
        }
        return res;
    }
};

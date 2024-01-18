class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> stringmap;
        
        for(int i=0; i<strs.size(); i++){
            string word=strs[i];
            sort(word.begin(), word.end());
            stringmap[word].push_back(strs[i]);
        }
        
        vector<vector<string>> res;
        for(auto j=stringmap.begin(); j!=stringmap.end();j++){
            res.push_back(j->second);
        }
        return res;
    }
};
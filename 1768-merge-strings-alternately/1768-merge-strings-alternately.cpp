class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        for(int i=0; i<word1.size() || i<word2.size(); i++){
            if (i<word1.size())
                merged+=word1[i];
            if(i<word2.size())
                merged+=word2[i];
        }
        return merged;
    }
};
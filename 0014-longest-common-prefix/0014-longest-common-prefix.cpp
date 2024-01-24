class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix ="";
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        int i = 0;

        while(i < first.size()){
            if(first[i] != last[i]){
                return prefix;
            }

            prefix = prefix + first[i];
     
            i++;
        }
        return prefix;
    }
};
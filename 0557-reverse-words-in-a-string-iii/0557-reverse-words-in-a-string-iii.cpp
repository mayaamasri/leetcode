class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stack<char> c;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' ')
                c.push(s[i]);
            else{
                while(!c.empty()){
                    ans+=c.top();
                    c.pop();
                }
                ans+=' ';
            }
        }
        while(!c.empty()){
            ans+=c.top();
            c.pop();
        }
        return ans;
    }
};
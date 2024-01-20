class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        unordered_set<string> op = {"+", "-", "/", "*"};
        for (auto i : tokens) {
            if (op.find(i) == op.end())
                s.push(stoi(i));

            else {
                
                int operand2 = s.top();
                s.pop();
                int operand1 = s.top();
                s.pop();
                
                if (i == "+")
                    s.push(operand1 + operand2);
                else if(i == "/")
                    s.push(operand1 / operand2);
                else if(i == "*")
                    s.push(operand1 * operand2);
                else
                    s.push(operand1 - operand2);
            }
        }
        return s.top();
    }
};
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        for(int i = 0;i < tokens.size();i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                res.push(stoi(tokens[i]));
            }else{
                int b = res.top(); res.pop();
                int a = res.top(); res.pop();

                if(tokens[i] == "+") res.push(a+b);
                else if(tokens[i] == "-") res.push(a - b);
                else if(tokens[i] == "*") res.push(a * b);
                else if(tokens[i] == "/") res.push(a / b);
            }
        }
        return res.top();
    }
};

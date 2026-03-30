class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        for(auto a : tokens){
           if(a != "+" and a != "-" and a != "*" and a != "/"){
            res.push(stoi(a));
           }else{
            int c = res.top(); res.pop();
            int b = res.top(); res.pop();
            if(a == "+") res.push(b+c);
            else if(a == "-") res.push(b-c);
            else if(a == "*") res.push(b*c);
            else if(a == "/") res.push(b/c);
           }
        }
        return res.top();
    }
};

class Solution {
public:
    bool isValid(string s) {
        stack<char> cmp;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                cmp.push(s[i]);
            }else{
                if(cmp.empty())return false;
                char top = cmp.top();
                cmp.pop();
                if((s[i] == ']' && top != '[') || (s[i] == '}' && top != '{') || (s[i] == ')' && top != '(')){
                    return false;
                } 
            }
            
        }
        return cmp.empty();
    }
};

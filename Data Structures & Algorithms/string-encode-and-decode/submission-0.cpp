class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string s : strs){
            int len = s.length();
            string value = to_string(len) + "#" + s;
            res = res + value;
        }
        return res;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> res;
        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            j++;
            string value = s.substr(j,len);
            res.push_back(value);
            i = j + len;
        }
        return res;
    }

};

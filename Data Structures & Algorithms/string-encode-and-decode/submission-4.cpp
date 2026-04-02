class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(auto a : strs){
            s += to_string(a.size()) + '#' + a;
        }
        return s;
    }
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#') j++;
            int len = stoi(s.substr(i,j - i));
            j++;
            string temp = s.substr(j,len);
            res.push_back(temp);
            i = j + len;
        }
        return res;
    }
};

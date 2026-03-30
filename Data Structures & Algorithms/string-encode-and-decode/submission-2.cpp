class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(auto a : strs){
            s = s + to_string(a.size()) + '#' + a;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            j++;
            string word = s.substr(j,len);
            dec.push_back(word);
            i = j + len; 
        }
        return dec;
    }
};

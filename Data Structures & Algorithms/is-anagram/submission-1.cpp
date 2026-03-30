#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int i;
        unordered_map <char,int> m1,m2;
        if(s.length() == t.length()){
            for(i = 0;i < s.length(); i++){
                m1[s[i]]++;
                m2[t[i]]++;
            }
            return m1 == m2;
        }
        else{
            return s.length() == t.length();
        }
    }
};

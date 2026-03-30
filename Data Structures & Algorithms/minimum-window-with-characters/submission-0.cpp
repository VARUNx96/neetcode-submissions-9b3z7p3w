class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> countT, window;

    for (char c : t) {
        countT[c]++;
    }

    int have = 0;
    int need = countT.size();

    int l = 0;
    int resLen = INT_MAX;
    int resL = 0;

    for (int r = 0; r < s.size(); r++) {
        char c = s[r];
        window[c]++;

        if (countT.count(c) && window[c] == countT[c]) {
            have++;
        }

        while (have == need) {
            // update result
            if ((r - l + 1) < resLen) {
                resLen = r - l + 1;
                resL = l;
            }

            // remove from left
            window[s[l]]--;
            if (countT.count(s[l]) && window[s[l]] < countT[s[l]]) {
                have--;
            }

            l++;
        }
    }

    return resLen == INT_MAX ? "" : s.substr(resL, resLen);
    }
    int main() {
    string s = "OUZODYXAZV", t = "XYZ";
    cout << minWindow(s, t);
     } 
};

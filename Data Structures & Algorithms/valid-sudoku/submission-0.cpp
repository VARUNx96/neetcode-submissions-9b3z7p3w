class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> colo(9);
        vector<unordered_set<int>> boxes(9);

        for(int r = 0;r < 9;r++){
            for(int c = 0;c < 9;c++){
                if(board[r][c] == '.') continue;
                int num = board[r][c] - '0';
                int ind = (r/3)*3 + (c/3);
                if(rows[r].count(num) || colo[c].count(num) || boxes[ind].count(num)){
                    return false;
                }
                rows[r].insert(num);
                colo[c].insert(num);
                boxes[ind].insert(num);
            }
        }
        return true;
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto i : matrix){
            int n = i.size() - 1;
            if(i[0] <= target && target <= i[n]){
                int l = 0;
                int r = n + 1;
                while(l < r){
                    int mid = l + (r - l)/2;
                    if(i[mid] == target) {
                        return true;
                    }else if(i[mid] > target){
                        r = mid;
                    }else{
                        l = mid + 1;
                    }
                }
            }
        }
        return false;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0;
        int e = numbers.size() - 1;

        while(s < e){
            int temp = numbers[s] + numbers[e];
            if(temp == target) return {s + 1,e + 1};
            if(temp > target) e--;
            else s++;
        }
    }
};

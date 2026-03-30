#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> map;
        int i,complement;
        if(!nums.empty()){
            for(i = 0;i < nums.size();i++){
                complement = target - nums[i];
                if(map.find(complement) != map.end()){
                    break; 
                }
                else {
                    map[nums[i]] = i;
                }
            }
        }
        else{
            cout << "THE VECTOR IS EMPTY";
        }
        return {map[complement], i};
    }
};

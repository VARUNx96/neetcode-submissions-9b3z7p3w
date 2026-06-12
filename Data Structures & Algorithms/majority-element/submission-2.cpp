class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int intial = 0;
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(count == 0){
                intial = nums[i];
            }
            if(intial == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return intial;
    }
};
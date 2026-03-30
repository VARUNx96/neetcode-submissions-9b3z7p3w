class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // stores indices
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
        
        // 1. Remove elements out of window
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }

        // 2. Maintain decreasing order in deque
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

        // 3. Add current index
            dq.push_back(i);

        // 4. Add max to result (when window is valid)
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }

        return result;
    }

    int main() {
        vector<int> nums = {1,3,-1,-3,5,3,6,7};
        int k = 3;

        vector<int> res = maxSlidingWindow(nums, k);

        for (int x : res) {
            cout << x << " ";
        }

        return 0;
    }
};

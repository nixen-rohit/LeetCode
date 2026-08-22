class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0;
        int max_diff = INT_MAX;

        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int idx = nums[i] + nums[left] + nums[right];
                int diff = abs(target - idx);

                if (max_diff > diff) {
                    max_diff = diff;
                    sum = idx;
                } else if (idx == target) {
                    left++;
                    right--;
                } else if (idx < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return sum;
    }
};
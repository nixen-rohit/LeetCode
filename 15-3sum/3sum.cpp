class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;
            int sum = -1 * nums[i];
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            while (left < right) {

                int idxsum = nums[left] + nums[right];

                if (sum == idxsum) {

                    res.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) {

                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {

                        right--;
                    }

                }

                else if (sum > idxsum) {

                    left++;

                } else {
                    right--;
                }
            }
        }
        return res;
    }
};
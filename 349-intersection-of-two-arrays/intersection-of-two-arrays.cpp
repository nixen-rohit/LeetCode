class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0;
        int m = nums1.size();
        int j = 0;
        int n = nums2.size();

        while (i < m && j < n) {

            if (nums1[i] == nums2[j] &&
                (res.empty() || res.back() != nums1[i])) {
                res.push_back(nums1[i]);
                i++;
                j++;
            }else if (nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }

        return res;
    }
};
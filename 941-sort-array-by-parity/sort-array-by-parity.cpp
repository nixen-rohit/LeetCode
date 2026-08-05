class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        vector<int> even;
        vector<int> odd;
        vector<int> res;

        for (int x : nums) {

            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }

        for (int x : even)
            res.push_back(x);

        for (int x : odd)
            res.push_back(x);

        return res;
    }
};
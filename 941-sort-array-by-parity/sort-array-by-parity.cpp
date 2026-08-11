class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        // brute force

        // vector<int> even;
        // vector<int> odd;
        // vector<int> res;
        

        // for (int x : nums) {
        //     if (x % 2 == 0) {
        //         even.push_back(x);
        //     } else {
        //         odd.push_back(x);
        //     }
        // }

        // for (int x : even) {
        //     res.push_back(x);
        // }
        // for (int x : odd) {
        //     res.push_back(x);
        // }


        //optimised

        int i = 0;
        int j = n-1;

        while(i<j){
            if(nums[i]%2==0){
                i++;
            }
            else if(nums[j]%2==1){
                j--;

            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }

        return nums;
    }
};
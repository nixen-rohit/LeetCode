class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        vector<int> res(n);

        for(int i = 0;i<n; i++){
            nums[i]*=nums[i];
        }

        int first = 0;
        int last = n - 1;

        for(int j = n - 1; j >= 0;j--){
            if(nums[first]<nums[last]){
                res[j]=nums[last];
                last--;

            }else{
                res[j]=nums[first];
                first++;
            }
        }

        return res;
        
    }
};
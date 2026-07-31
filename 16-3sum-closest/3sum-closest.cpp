class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int max_diff = INT_MAX;
        int sum = 0;

        for(int i=0;i<n-2;i++){
            int left = i+1;
            int right = n-1;
            
            while(left<right){
                int s = nums[left] + nums[right] + nums[i];
                int diff = abs(target-s);
                if(max_diff > diff){
                    max_diff = diff;
                    sum = s;
                }
                if(s == target){
                    left++;
                    right--;
                }
                else if(s < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return sum;
    }
};
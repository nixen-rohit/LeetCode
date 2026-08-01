class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // values monitor
        // i = 0;
        // j=1;
        // k=2;

        int n = nums.size();
        int i = 0;
        int j = 0;
        int k = n-1;


        while(j<=k){

           
              if(nums[j]==1){
               
                j++;
            }


            else if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }


           else{
                swap(nums[j],nums[i]);
                i++;
                j++;
            }

            
        }
        
    }
};
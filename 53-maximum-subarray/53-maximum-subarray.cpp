class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count=0;
        int max_till_now = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=(count+nums[i])) count += nums[i];
            else{
                count = nums[i];
            }
         if(max_till_now<count) max_till_now = count;
        }
               
               return max_till_now;
    }
};
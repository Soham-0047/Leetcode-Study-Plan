class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int kth_large = nums[0];
        int tmp;
        // 1,2,3,4,5,6
        // 1,2,2,3,3,4,5,5,6
        sort(nums.begin(),nums.end());
        // while(nums.back() != k){
        //     tmp = nums.back();
        //     nums.pop_back();
        // }
        tmp = nums[nums.size() - k];

        return tmp;
    }
};
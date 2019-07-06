class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size()<=1) return -1;
        int slow=nums[0], fast=nums[nums[0]];
        while(fast!=slow){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        fast = 0;
        while(fast!=slow){
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }
};
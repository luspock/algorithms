class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        else if(n==2) return nums[0]>nums[1]?nums[0]:nums[1];
        else{
            std::set<int> all;
            for(int i=0;i<n;i++){
                all.insert(nums[i]);
            }
            if(all.size()<3) return *all.end();
            std::reverse_iterator it=all.rend();
            return *(it++++);
        }
    }
};
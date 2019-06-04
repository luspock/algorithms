int any = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        if(n==2) return 1;
        std::sort(nums.begin(), nums.end());
        int step = 0;
        int num_medium = 0;
        if(n%2==0)
            num_medium = floor((nums[n/2-1]+nums[n/2])/2);
        else
            num_medium = nums[n/2];
        for(int i=0;i<n;i++){
                step += abs(nums[i]-num_medium);
        }
        return step;
    }
};
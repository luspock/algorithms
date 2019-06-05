// recursion
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int *num_p = nums.data();
        return jump_k(num_p,n,0);
    }
    
    int jump_k(const int* nums, const int n, int k){
        if((n-k)==0||(n-k)==1) return 0;
        if((n-k)==2) return 1;
        int maxJump = nums[k];
        if(maxJump==0) return n; // skip this situation
        if(maxJump>=n-k-1) return 1;
        int sub_minJump = n-k-2;
        for(int i=k+1;i<k+maxJump+1;++i){
            if(nums[i]==0) continue;
        	int temp_miniJump = jump_k(nums,n,i);
        	if(temp_miniJump<sub_minJump)
        		sub_minJump=temp_miniJump;
        }
        return sub_minJump+1;
    }
};

// greedy
class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, end = 0, curfar = 0;
        for(int i = 0; i < nums.size()-1; i++)
        {
            curfar = max(curfar, i + nums[i]);//upto max index jumps
            if(i == end)//when equal then we take next jump 
            {
                jumps++;
                end = curfar;//set the next index after which it will jump
            }
        }
        return jumps;
    }
};
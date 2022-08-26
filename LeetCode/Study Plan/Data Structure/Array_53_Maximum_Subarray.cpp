class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0]-1, crnt =0;
        for(auto num: nums){
            if(crnt < 0) crnt = 0;
            crnt += num;
            if(crnt > max){
                max = crnt;
            }
        }
        
        return max;
    }
};



class Solution {
private:
    vector<int> createAnswer(int a, int b){
        vector<int> answer;
        answer.push_back(a);
        answer.push_back(b);
        
        return answer;
    }
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> sumIndex; // a+b = target -> < b , a index>
        
        int numsSize = nums.size();
        for(int i=0;i<numsSize;i++){
            if(sumIndex.find(nums[i])!=sumIndex.end()){
                return createAnswer(i, sumIndex[nums[i]]);
            }
            sumIndex.insert({target-nums[i], i});
        }
        
        return createAnswer(-1,-1);
    }
};
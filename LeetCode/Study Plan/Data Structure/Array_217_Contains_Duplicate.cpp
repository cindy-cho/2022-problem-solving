class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> notDuplicateNums;
        for(auto num : nums){
            if(notDuplicateNums.find(num)!=notDuplicateNums.end()) return true;
            notDuplicateNums.insert({num, true});
        }
        
        return false;
    }
};
class Solution {
    fun containsDuplicate(nums: IntArray) =
        if(nums.count() == nums.distinct().count()) false else true
}
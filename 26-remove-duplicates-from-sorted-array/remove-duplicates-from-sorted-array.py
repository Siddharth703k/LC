class Solution(object):
    def removeDuplicates(self, nums):
        s=set(nums)
        nums[:]=sorted(s)
        return len(s)
        
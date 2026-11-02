class Solution(object):
    def intersection(self, nums1, nums2):
        a=[]
        for i in nums1:
            if i in nums2:
                if i not in a:
                    a.append(i)
        return a 
        
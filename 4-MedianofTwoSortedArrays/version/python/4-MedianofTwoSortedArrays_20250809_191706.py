# Last updated: 8/9/2025, 7:17:06 PM
import statistics as st
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums3=nums1+nums2
        med=st.median(nums3)
        return med
        
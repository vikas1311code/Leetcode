import sys

class Solution:
    def findMedianSortedArrays(self,nums1,nums2):
        m, n = len(nums1), len(nums2)
        if m>n:
            nums1,nums2,m, n = nums2, nums1,n,m
        low,high = 0,m
        total_left_half_len=(m+n+1)//2
        while low<= high:
            partition1 = (low+high)//2
            partition2 = total_left_half_len-partition1
            max_left_nums1=nums1[partition1-1] if partition1>0 else -sys.maxsize
            min_right_nums1=nums1[partition1] if partition1<m else sys.maxsize
            max_left_nums2=nums2[partition2-1] if partition2>0 else -sys.maxsize
            min_right_nums2=nums2[partition2] if partition2<n else sys.maxsize
            if max_left_nums1<=min_right_nums2 and max_left_nums2 <= min_right_nums1:
                if(m+n)%2==1:
                    return max(max_left_nums1,max_left_nums2)
                else:
                    return(max(max_left_nums1,max_left_nums2)+min(min_right_nums1,min_right_nums2))/2.0
            elif max_left_nums1>min_right_nums2:
                high = partition1-1
            else:
                low = partition1+1
        return 0
sol = Solution()
print(sol.findMedianSortedArrays([1,3], [2]))      # Expected: 2.0
print(sol.findMedianSortedArrays([1,2], [3,4]))
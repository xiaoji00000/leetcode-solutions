"""
1. Two Sum

Given an array of integers nums and an integer target, return indices of the 
two numbers such that they add up to target.
"""

from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        """
        Hash map approach - O(n) time, O(n) space
        
        Args:
            nums: List of integers
            target: Target sum
            
        Returns:
            List containing indices of two numbers that add up to target
        """
        # Dictionary to store number -> index mapping
        seen = {}
        
        for i, num in enumerate(nums):
            complement = target - num
            
            # Check if complement exists in our seen dictionary
            if complement in seen:
                return [seen[complement], i]
            
            # Add current number and its index to dictionary
            seen[num] = i
        
        # Should never reach here based on problem constraints
        return []


# Test cases
if __name__ == "__main__":
    solution = Solution()
    
    # Test case 1
    nums1 = [2, 7, 11, 15]
    target1 = 9
    print(f"Input: nums = {nums1}, target = {target1}")
    print(f"Output: {solution.twoSum(nums1, target1)}")
    print()
    
    # Test case 2
    nums2 = [3, 2, 4]
    target2 = 6
    print(f"Input: nums = {nums2}, target = {target2}")
    print(f"Output: {solution.twoSum(nums2, target2)}")
    print()
    
    # Test case 3
    nums3 = [3, 3]
    target3 = 6
    print(f"Input: nums = {nums3}, target = {target3}")
    print(f"Output: {solution.twoSum(nums3, target3)}")

/**
 * 1. Two Sum
 * 
 * Given an array of integers nums and an integer target, return indices of the 
 * two numbers such that they add up to target.
 */

import java.util.HashMap;
import java.util.Map;

class Solution {
    /**
     * Hash map approach - O(n) time, O(n) space
     * 
     * @param nums Array of integers
     * @param target Target sum
     * @return Array containing indices of two numbers that add up to target
     */
    public int[] twoSum(int[] nums, int target) {
        // Map to store number -> index mapping
        Map<Integer, Integer> seen = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            
            // Check if complement exists in our seen map
            if (seen.containsKey(complement)) {
                return new int[] { seen.get(complement), i };
            }
            
            // Add current number and its index to map
            seen.put(nums[i], i);
        }
        
        // Should never reach here based on problem constraints
        return new int[] {};
    }
    
    // Test cases
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Test case 1
        int[] nums1 = {2, 7, 11, 15};
        int target1 = 9;
        int[] result1 = solution.twoSum(nums1, target1);
        System.out.println("Input: nums = [2,7,11,15], target = 9");
        System.out.println("Output: [" + result1[0] + "," + result1[1] + "]");
        System.out.println();
        
        // Test case 2
        int[] nums2 = {3, 2, 4};
        int target2 = 6;
        int[] result2 = solution.twoSum(nums2, target2);
        System.out.println("Input: nums = [3,2,4], target = 6");
        System.out.println("Output: [" + result2[0] + "," + result2[1] + "]");
        System.out.println();
        
        // Test case 3
        int[] nums3 = {3, 3};
        int target3 = 6;
        int[] result3 = solution.twoSum(nums3, target3);
        System.out.println("Input: nums = [3,3], target = 6");
        System.out.println("Output: [" + result3[0] + "," + result3[1] + "]");
    }
}

# 1. Two Sum

## Problem Description

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example 1:**
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Example 2:**
```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Example 3:**
```
Input: nums = [3,3], target = 6
Output: [0,1]
```

**Constraints:**
- 2 <= nums.length <= 10^4
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9
- Only one valid answer exists.

## Approach

### Hash Map Solution

Use a hash map to store numbers we've seen and their indices. For each number, check if `target - current_number` exists in the hash map.

**Algorithm:**
1. Create an empty hash map
2. Iterate through the array
3. For each number, calculate complement = target - number
4. If complement exists in hash map, return [hash_map[complement], current_index]
5. Otherwise, add current number and index to hash map

**Time Complexity:** O(n) - We traverse the list once
**Space Complexity:** O(n) - Hash map can store up to n elements

## Solutions

- [Python](./solution.py)
- [Java](./solution.java)

# Problem Template

Use this template when adding new LeetCode solutions to the repository.

## Directory Structure

Create a new directory for each problem:
```
solutions/{problem_number}-{problem-name}/
```

Example: `solutions/0001-two-sum/`

## Files to Include

### 1. README.md

```markdown
# {Number}. {Problem Title}

## Problem Description

{Paste the problem description from LeetCode}

**Example 1:**
```
{Example}
```

**Constraints:**
- {List constraints}

## Approach

### {Solution Name}

{Describe your approach}

**Algorithm:**
1. {Step 1}
2. {Step 2}
...

**Time Complexity:** O(?)
**Space Complexity:** O(?)

## Solutions

- [Python](./solution.py)
- [Java](./solution.java)
- {Add other languages as needed}
```

### 2. Solution Files

Create solution files for each language you implement:
- `solution.py` - Python solution
- `solution.java` - Java solution
- `solution.cpp` - C++ solution
- `solution.js` - JavaScript solution
- `solution.go` - Go solution

### 3. Solution File Template (Python)

```python
"""
{Number}. {Problem Title}

{Brief problem description}
"""

from typing import List


class Solution:
    def {methodName}(self, {params}) -> {return_type}:
        """
        {Approach description} - O(?) time, O(?) space
        
        Args:
            {param}: {description}
            
        Returns:
            {return description}
        """
        # Your solution here
        pass


# Test cases
if __name__ == "__main__":
    solution = Solution()
    
    # Test case 1
    # Add your test cases here
```

### 4. Solution File Template (Java)

```java
/**
 * {Number}. {Problem Title}
 * 
 * {Brief problem description}
 */

class Solution {
    /**
     * {Approach description} - O(?) time, O(?) space
     * 
     * @param {param} {description}
     * @return {return description}
     */
    public {ReturnType} {methodName}({params}) {
        // Your solution here
        return null;
    }
    
    // Test cases
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Test case 1
        // Add your test cases here
    }
}
```

## Steps to Add a New Problem

1. Create a new directory: `solutions/{problem_number}-{problem-name}/`
2. Add README.md with problem description and approach
3. Implement solution in one or more languages
4. Test your solution locally
5. Update the main README.md progress table
6. Commit your changes

## Naming Conventions

- Directory names: lowercase with hyphens (e.g., `0001-two-sum`)
- Problem numbers: 4 digits with leading zeros (e.g., `0001`, 0042, 1234)
- Solution files: `solution.{extension}` (e.g., `solution.py`, `solution.java`)

## Tips

- Always include test cases in your solution files
- Document your approach and complexity analysis
- Use descriptive variable names
- Add comments for complex logic
- Follow language-specific conventions and best practices

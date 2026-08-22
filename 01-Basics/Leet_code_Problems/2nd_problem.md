# 🔄 Palindrome Number
[Two Sum - LeetCode](https://leetcode.com/problems/palindrome-number/submissions/2115758412/)

## 📌 Problem

Given an integer `x`, return `True` if `x` is a palindrome, and `False` otherwise.

A **palindrome number** reads the same forward and backward.

### Examples

```text
121  → True
123  → False
-121 → False
10   → False
## ✅ Solution

```python
class Solution:
    def isPalindrome(self, x: int) -> bool:

        if x < 0:
            return False

        original = x
        rev = 0

        while x > 0:
            rev = rev * 10 + (x % 10)
            x = x // 10

        return original == rev
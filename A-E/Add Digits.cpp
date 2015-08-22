/**
 * Leetcode 258 - Add Digits 
 * Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
 * For example:
 * Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
 * 要求：Do it without any loop/recursion in O(1) runtime
 * 思路：不让用循环和递归，那么一定是有规律的。。
 * 最后看了Hint才知道。。没什么好说的，见Digital root
 */

class Solution {
public:
    int addDigits(int num) {
        return (num-1) % 9 + 1;
    }
};

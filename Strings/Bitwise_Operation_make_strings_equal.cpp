#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool makeStringsEqual(string s, string target)
    {
        // In this question if there is even 1 present we will be able to convert our string to the target string because XOR will allow us to do so.
        // Edge case: In case our entire string consists of only '0' on either the target or the string s. We will have to return false.
        if (s == target)
            return true; // If the strings are alreadt equal no need for any computation.
        int n = s.length(), m = target.length();
        if (n < m or n > m)
            return false; // If they are not the same length.
        int count0_s = 0, countT_0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count0_s++;
            }
            if (target[i] == '0')
            {
                countT_0++;
            }
        }
        if (countT_0 == m or count0_s == n)
        {
            return false;
        }
        return true;
    }
};
// Analysis: TC stands for Time Complexity and SC stands for Space Complexity
// TC: O(n)
// SC: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        // Getting the length of both the strings.
        int n = word1.length(), m = word2.length();
        // A variable which will store the length of the shorter string.
        int comp = 0;
        if (n <= m)
        {
            comp = n;
        }
        else
        {
            comp = m;
        }
        // String variable which will store the answer.
        string ans = "";
        // For loop that will store the characters alternatively.
        for (int i = 0; i < comp; i++)
        {
            ans += word1[i];
            ans += word2[i];
        }
        // Dealing with remaining characters of the longer string.
        if (comp == n)
        {
            for (int i = comp; i < m; i++)
            {
                ans += word2[i];
            }
        }
        else
        {
            for (int i = comp; i < n; i++)
            {
                ans += word1[i];
            }
        }

        return ans; // Retuning the answer.
    }
};
// Analysis:
// TC: O(length of bigger string)
// SC: O(n)
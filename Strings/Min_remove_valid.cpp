#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
//Algorithm is used without the use of stack.
    // Using without stack.
    string minRemoveToMakeValid(string s)
    {
        int count = 0;
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                count++;
            }
            else if (s[i] == ')')
            {
                if (count == 0)
                {
                    s[i] = '@'; // Not a valid pair.
                }
                else
                {
                    count--; // Found a valid pair.
                }
            }
        }
        count = 0; // Re-initializing count for reverse looping.
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ')')
            {
                count++;
            }
            else if (s[i] == '(')
            {
                if (count == 0)
                {
                    s[i] = '@'; // Not a valid pair.
                }
                else
                {
                    count--; // Found a valid pair.
                }
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '@')
            {
                res += s[i];
            }
        }
        return res;
    }
};
// TC O(n+n+n) = O(n).
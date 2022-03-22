#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    // To make it as small as possible start iterating from the end.
    string getSmallestString(int n, int k)
    {
        // First make the string as lexicographically as possible.
        string s = "";
        for (int i = 0; i < n; i++)
        {
            s += "a"; // String as small as possible equal to n.
        }
        k -= n;
        for (int i = n - 1; i >= 0; i--)
        { // Iterating from the last character.
            if (k == 0)
                break;
            else if (k < 25)
            { // If it is less than 25.
                s[i] = (char)('a' + k);
                k = 0;
            }
            else
            { // If the sum of characters is more than or equal to 25.
                s[i] = 'z';
                k -= 25;
            }
        }
        return s;
    }
};
// Analysis:-
// TC:- O(n)
// SC:- O(1)
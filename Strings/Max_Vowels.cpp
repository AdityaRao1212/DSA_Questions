#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // To handle an edge case we can transform the whole string to lower case
    // well that case is covered in the question.
    int isVowel(char ch) //Helper function to check whether the char is vowel or not.
    {
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
        {
            return 1;
        }
        return 0;
    }
    // The max answer that the question can have is k as only substring of k length is allowed.
    // So the max count of vowels can be k only.
    int maxVowels(string s, int k)
    {
        int count = 0, mx = -1;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            count += isVowel(s[i]); // As we have to find each substring we just have to remove the (i-k)th char and add the ith char to generate the new substring.
            if (i >= k)
            {
                count -= isVowel(s[i - k]); // If the removed character is vowel.
            }
            mx = max(mx, count); // for the max count.
        }
        return mx;
    }
};
// Analysis:
// TC: O(n)
// SC: O(1)
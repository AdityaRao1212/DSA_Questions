#include <bits/stdc++.h>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;


// Analysis:
// TC:- O(n)
// SC:- O(n)

class Solution
{
public:
    int scoreOfParentheses(string s)
    {
        int score = 0; // To store our final answer.
        stack<int> st; // Important we will make a stack if integer.
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            // If we find open parenthesis we push the score and again initialise it to zero.
            if (s[i] == '(')
            {
                st.push(score);
                score = 0;
            }
            else
            { // If we come across closed parenthesis.
                score = st.top() + max(2 * score, 1);
                st.pop();
            }
        }
        return score;
    }
};
#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string simplifyPath(string s)
    {
        int n = s.length();
        int i = 0;
        stack<string> st;
        string res = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '/')
                continue; // Ignore slashes we will take care of it at last.
            string temp = "";
            while (i < n && s[i] != '/')
            {
                temp += s[i];
                i++;
            }
            if (temp == ".")
                continue; // Ignore dot.
            else if (temp == "..")
            {
                if (!st.empty())
                    st.pop(); // If we have two dots we need to pop from the stack.
            }
            else
            {
                st.push(temp);
            }
        }
        if (st.empty())
        {
            return "/";
        }
        while (!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }
        return res;
    }
};
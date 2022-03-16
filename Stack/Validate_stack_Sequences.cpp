#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &pop)
    {
        int j = 0;             // Pointer pointing to pop array.
        stack<int> st;         // Initializing stack.
        int n = pushed.size(); // Size of pushed array.
        for (int i = 0; i < n; i++)
        {
            st.push(pushed[i]);
            while (!st.empty() && st.top() == pop[j])
            { // Until the top becomes equal to the pop element push the elements after that remove the element from the stack.
                st.pop();
                j++;
            }
        }
        return st.empty(); // If the stack is empty the sequence is validated otherwise not.
    }
};
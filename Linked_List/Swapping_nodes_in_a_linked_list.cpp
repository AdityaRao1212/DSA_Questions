#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *p1 = head, *p2 = head, *temp = nullptr;
        while (--k) // This is very important.
        {
            p1 = p1->next;
        }
        temp = p1;
        p1 = p1->next;
        while (p1) // Till this pointer reach the end the 2nd pointer will reach (n-k)th node.
        {
            p1 = p1->next;
            p2 = p2->next;
        }
        swap(p2->val, temp->val); // Swap the values from the beginning and the end.
        return head;
    }
};
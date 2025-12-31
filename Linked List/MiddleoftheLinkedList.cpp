/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{

public:
    int getLength(ListNode *head)
    {

        int len = 0;

        while (head != NULL)
        {
            len++;
            head = head->next;
        }

        return len;
    }

public:
    ListNode *middleNode(ListNode *head)
    {
        int midLen = getLength(head) / 2;

        ListNode *temp = head;
        while (midLen != 0)
        {
            temp = temp->next;
            midLen--;
        }

        return temp;
    }
};
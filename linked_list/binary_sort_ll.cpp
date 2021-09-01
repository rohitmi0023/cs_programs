/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode *head = A; //holds the address of starting node
    ListNode *prev = A; // holds the address of the previous node
    A = A->next;
    while (A != NULL)
    {
        if (A->val == 0)
        {
            ListNode *temp = A;
            // increasing the A
            A = A->next;
            // connecting the prev node to current's next node 
            prev->next = temp->next;
            // pushing the current node to the first postion
            temp->next = head;
            // assigning the head to the current element
            head = temp;
        }
        else
        {
            A = A->next;
            prev = prev->next;
        }
    }
    return head;
}
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *curr = A;
    while(curr != NULL)
    {
        if(curr->val == curr->next->val)
        {
            ListNode *temp = curr;
            curr->next = curr->next->next;
            free(temp->next);
        }
        curr = curr->next;
    }
    return A;
}

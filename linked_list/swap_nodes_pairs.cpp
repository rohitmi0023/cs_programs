ListNode *swap(ListNode *l1, ListNode *l2)
{
    l1->next = l2->next;
    l2->next = l1;
    return l2;
}

ListNode *Solution::swapPairs(ListNode *A){
    ListNode *dummy = new ListNode(0);
    dummy->next = A;
    ListNode *cur = dummy;
    while(cur->next != NULL && cur->next->next != NULL)
    {
        cur->next = swap(cur->next, cur->next->next);
        cur = cur->next->next;
    }
    return dummy->next;
}
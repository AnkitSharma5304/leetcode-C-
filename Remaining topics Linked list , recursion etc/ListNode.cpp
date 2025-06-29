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
class Solution {
public:
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*low=head;
        ListNode*high=head->next;
        while(high!=NULL){
            int data=gcd(low->val , high->val);
            ListNode* newnode= new ListNode(data);
            low->next=newnode;
            newnode->next=high;
            low=newnode->next;
            high=high->next;
        }
        return head;
    }
};
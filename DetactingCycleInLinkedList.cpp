// Certainly! Let's break down the code and especially focus on the while loop part.

// This code is implementing a function to detect if a singly-linked list has a cycle. This is achieved using Floyd's Cycle-Finding Algorithm, also known as the "Tortoise and Hare" algorithm. Here is a step-by-step explanation:

// Structure Definitions
// ListNode Structure:
// cpp
// Copy code
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
// This structure defines a node in a singly-linked list. Each node has an integer value (val) and a pointer to the next node (next).
// Solution Class
// Solution Class:
// cpp
// Copy code
class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode* tez=head;
       ListNode * dheere=head;
       while(tez!= NULL && tez->next!=NULL){
        tez=tez->next->next;
        dheere=dheere->next;
       if(tez==dheere){
        return true;
       }
       }
    return false ;
    }
};
// hasCycle Function
// hasCycle Function:
// cpp
// Copy code
bool hasCycle(ListNode *head) {
   ListNode* tez=head;
   ListNode * dheere=head;
   while(tez!= NULL && tez->next!=NULL){
    tez=tez->next->next;
    dheere=dheere->next;
   if(tez==dheere){
    return true;
   }
   }
return false ;
}
// Explanation of the while loop
// Initialization:

// cpp
// Copy code
// ListNode* tez=head;
// ListNode * dheere=head;
// // Two pointers, tez (fast pointer) and dheere (slow pointer), are initialized to the head of the list.

// // Loop Condition:

// // cpp
// // Copy code
// while(tez != NULL && tez->next != NULL){
// // The loop continues to execute as long as tez (fast pointer) and the node after tez are not NULL. This ensures that we do not attempt to access NULL->next, which would cause a segmentation fault.

// // Advancing Pointers:

// // cpp
// // Copy code
// tez = tez->next->next;
// dheere = dheere->next;
// // Inside the loop:

// // tez moves two steps at a time (tez = tez->next->next).
// // dheere moves one step at a time (dheere = dheere->next).
// // Cycle Detection:

// // cpp
// // Copy code
// if(tez == dheere){
//     return true;
// }
// // After moving the pointers, we check if tez and dheere are pointing to the same node. If they are, this means there's a cycle in the list, and the function returns true.

// // Loop Exit:
// // If the loop exits without tez and dheere meeting, it means there's no cycle, and the function returns false.

// // Summary
// // The while loop works by advancing the fast pointer (tez) twice as fast as the slow pointer (dheere). If there is a cycle, the fast pointer will eventually meet the slow pointer within the cycle. If there is no cycle, the fast pointer will reach the end of the list (NULL), and the function will return false.
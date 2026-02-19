#include <iostream>
using namespace std;

// Definition of singly linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Function to find intersection node
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

    if (headA == NULL || headB == NULL) {
        return NULL;
    }

    ListNode* ptrA = headA;
    ListNode* ptrB = headB;

    while (ptrA != ptrB) {

        if (ptrA == NULL) {
            ptrA = headB;
        } else {
            ptrA = ptrA->next;
        }

        if (ptrB == NULL) {
            ptrB = headA;
        } else {
            ptrB = ptrB->next;
        }
    }

    return ptrA;   // either intersection node or NULL
}

int main() {

    /*
        Creating example:

        A: 4 -> 1 \
                     8 -> 4 -> 5
        B:     5 -> 6 -> 1 /
    */

    // Common intersection part
    ListNode* common = new ListNode(8);
    common->next = new ListNode(4);
    common->next->next = new ListNode(5);

    // List A
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = common;

    // List B
    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = common;

    ListNode* intersection = getIntersectionNode(headA, headB);

    if (intersection != NULL) {
        cout << "Intersected at node with value: " << intersection->val << endl;
    } else {
        cout << "No intersection" << endl;
    }

    return 0;
}
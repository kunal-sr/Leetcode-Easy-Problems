#include <iostream>
using namespace std;

// Definition of linked list node
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Function to detect cycle in linked list
bool hasCycle(ListNode* head) {

    if (head == NULL) {
        return false;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // move 1 step
        fast = fast->next->next;   // move 2 steps

        if (slow == fast) {
            return true;            // cycle detected
        }
    }

    return false;                   // no cycle
}

int main() {
    /*
        Example:
        3 -> 2 -> 0 -> -4
             ^           |
             |___________|
    */

    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Creating a cycle (tail connects to node with value 2)
    head->next->next->next->next = head->next;

    if (hasCycle(head)) {
        cout << "Cycle detected in linked list" << endl;
    } else {
        cout << "No cycle in linked list" << endl;
    }

    return 0;
}
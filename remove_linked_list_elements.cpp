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

// Function to remove elements equal to val
ListNode* removeElements(ListNode* head, int val) {

    // create dummy node
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* current = dummy;

    while (current->next != NULL) {

        if (current->next->val == val) {
            current->next = current->next->next;
        } else {
            current = current->next;
        }
    }

    return dummy->next;
}

// Function to print linked list
void printList(ListNode* head) {

    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    /*
        Example:
        1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
        val = 6
    */

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    int val = 6;

    cout << "Original List: ";
    printList(head);

    head = removeElements(head, val);

    cout << "After Removing " << val << ": ";
    printList(head);

    return 0;
}

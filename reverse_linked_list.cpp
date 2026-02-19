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

// 🔹 Iterative Reverse
ListNode* reverseListIterative(ListNode* head) {

    ListNode* prev = NULL;
    ListNode* current = head;

    while (current != NULL) {

        ListNode* nextNode = current->next;  // store next

        current->next = prev;                // reverse link

        prev = current;                      // move prev
        current = nextNode;                  // move current
    }

    return prev;
}

// 🔹 Recursive Reverse
ListNode* reverseListRecursive(ListNode* head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* newHead = reverseListRecursive(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
}

// Function to print list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Create list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    // 🔹 Choose one of the two methods:

    // Iterative
    head = reverseListIterative(head);

    // Recursive (uncomment if you want to test)
    // head = reverseListRecursive(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}

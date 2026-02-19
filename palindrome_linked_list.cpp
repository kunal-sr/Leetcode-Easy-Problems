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

// Reverse linked list
ListNode* reverseList(ListNode* head) {

    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

// Check if linked list is palindrome
bool isPalindrome(ListNode* head) {

    if (head == NULL || head->next == NULL) {
        return true;
    }

    // Step 1: Find middle
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse second half
    ListNode* secondHalf = reverseList(slow);

    // Step 3: Compare both halves
    ListNode* firstHalf = head;

    while (secondHalf != NULL) {
        if (firstHalf->val != secondHalf->val) {
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}

// Print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Example: 1 -> 2 -> 2 -> 1
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    cout << "Linked List: ";
    printList(head);

    if (isPalindrome(head)) {
        cout << "It is a Palindrome." << endl;
    } else {
        cout << "It is NOT a Palindrome." << endl;
    }

    return 0;
}

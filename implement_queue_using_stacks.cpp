#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> inStack;
    stack<int> outStack;

    // Move elements from inStack to outStack only when needed
    void moveIfNeeded() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

public:
    MyQueue() {
    }

    // Push element to back of queue
    void push(int x) {
        inStack.push(x);
    }

    // Remove element from front
    int pop() {
        moveIfNeeded();
        int value = outStack.top();
        outStack.pop();
        return value;
    }

    // Get front element
    int peek() {
        moveIfNeeded();
        return outStack.top();
    }

    // Check if queue is empty
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

int main() {

    MyQueue myQueue;

    myQueue.push(1);
    myQueue.push(2);

    cout << "Front element (peek): " << myQueue.peek() << endl;
    cout << "Popped element: " << myQueue.pop() << endl;
    cout << "Is queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    return 0;
}

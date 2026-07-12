class ArrayStack {
private:
    int arr[1000];
    int topIndex;

public:
    ArrayStack() {
        topIndex = -1;
    }

    // Push element
    void push(int x) {
        arr[++topIndex] = x;
    }

    // Remove top element
    int pop() {
        if (isEmpty())
            return -1;

        return arr[topIndex--];
    }

    // Return top element
    int top() {
        if (isEmpty())
            return -1;

        return arr[topIndex];
    }

    // Check if stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }
};
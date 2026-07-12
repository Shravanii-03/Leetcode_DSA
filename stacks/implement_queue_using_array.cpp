class CircularQueue {
private:
    int *arr;
    int front, rear;
    int size;

public:
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Insert an element
    void enqueue(int x) {
        // Queue is full
        if ((rear + 1) % size == front) {
            cout << "Queue Overflow\n";
            return;
        }

        // First element
        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
    }

    // Remove an element
    int dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
            return -1;
        }

        int ans = arr[front];

        // Only one element
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }

        return ans;
    }

    // Return front element
    int peek() {
        if (front == -1) {
            cout << "Queue is Empty\n";
            return -1;
        }

        return arr[front];
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == -1;
    }
};
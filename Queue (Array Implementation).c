//Queue (Array Implementation)

#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int x) {
    if (rear == SIZE - 1)
        printf("Queue Full\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = x;
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue Empty\n");
    else
        printf("Dequeued: %d\n", queue[front++]);
}

int main() {
    enqueue(5);
    enqueue(10);
    dequeue();
    return 0;
}

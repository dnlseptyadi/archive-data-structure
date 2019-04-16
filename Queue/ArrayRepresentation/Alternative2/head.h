#include <iostream>
#define max 5
#define ln cout << endl;
using namespace std;

struct Queue {
    int info[max];
    int head,tail;
};

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
};

bool isEmpty(Queue Q) {
    return (Q.head == -1 and Q.tail == -1);
};

bool isFull(Queue Q) {
    return (Q.head == 0 and Q.tail == max - 1);
};

void add(Queue &Q, int a) {
    if(isFull(Q)) cout << "Full Queue";
    else if (isEmpty(Q)) {
        Q.head++;
        Q.tail++;
        Q.info[Q.tail] = a;
    } else if (Q.tail == max-1) {
        int j = 0;
        for(int i = Q.head;i <= Q.tail;i++) {
            Q.info[j] = Q.info[i];
            j++;
        }
        Q.head = 0;
        Q.tail = j;
        Q.info[Q.tail++] = a;
    } else {
        Q.tail++;
        Q.info[Q.tail] = a;
    }
};

void del(Queue &Q) {
    if(isEmpty(Q)) cout << "Empty Queue";
    else {
        if(Q.head == Q.tail) {
            Q.head = -1;
            Q.tail = -1;
        } else {
            Q.head++;
        }
    }
};

void read(Queue Q) {
    if(!isEmpty(Q))
        for(int i = Q.head;i <= Q.tail;i++) cout << Q.info[i] << " ";
    else cout << "Empty Queue";
}
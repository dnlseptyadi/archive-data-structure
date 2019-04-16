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
    return ((Q.head == 0 and Q.tail == max-1) || Q.tail == Q.head-1);
};

void add(Queue &Q, int a) {
    if(isFull(Q)) cout << "Full Queue";
    else {
        if (!isEmpty(Q)) {
            if (Q.tail = max-1) Q.tail = 0;
            else Q.tail++;
        } else {
            Q.head++;
            Q.tail++;
        }
        Q.info[Q.tail] = a;
    }
};

void del(Queue &Q) {
    if(isEmpty(Q)) cout << "Empty Queue";
    else {
        if(Q.tail == Q.head) {
            Q.tail = -1;
            Q.head = -1;
        } else if (Q.head == max-1) Q.head = 0;
        else Q.head++;
    }
};

void read(Queue Q) {
    if(!isEmpty(Q))
        if(Q.head < Q.tail)
            for(int i = Q.head;i <= Q.tail;i++) cout << Q.info[i] << " ";
        else {
            for(int i = Q.head;i <= max-1;i++) cout << Q.info[i] << " ";
            for(int i = 0;i <= Q.tail;i++) cout << Q.info[i] << " ";
        }
    else cout << "Empty Queue";
}
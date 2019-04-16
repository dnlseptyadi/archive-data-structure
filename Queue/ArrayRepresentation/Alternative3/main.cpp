#include "head.h"

int main() {

    Queue Q;
    createQueue(Q);

    read(Q);ln;

    add(Q, 10);
    add(Q, 20);
    add(Q, 20);
    del(Q);
    add(Q, 20);
    add(Q, 20);
    

    // read(Q);

    cout << Q.head << " " << Q.tail;ln;

    return 0;
}
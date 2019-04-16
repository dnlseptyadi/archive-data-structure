#include "head.h"

int main() {

    stack S;
    createStack(S);

    read(S);ln;

    for(int i = 0;i < max;i++) push(S, i);

    read(S);ln;

    push(S, 10);ln;
    push(S, 2);ln;

    read(S); ln;

    pop(S);

    cout << S.top << endl;

    // cout << find(S, 10);ln;

    return 0;
}
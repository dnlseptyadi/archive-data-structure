#include <iostream>

#define ln cout << endl

using namespace std;

typedef struct ElmStack *address;

struct ElmStack {
    int info;
    address next;
};

struct stack {
    address top;
};

void createStack(stack &S) {
    S.top = NULL;
};

address allocate(int x) {
    address P = new ElmStack;
    P->info = x;
    P->next = NULL;
    return P;
};

bool stackEmpty(stack &S) {
    return S.top == NULL;
};
void push(stack &S, address P) {
    if(stackEmpty(S)) S.top = P;
    else {
        P->next = S.top;
        S.top = P;
    }
};

void pop(stack &S) {
    if(S.top->next == NULL) S.top = NULL;
    else {
        address P = S.top;
        S.top = P->next;
        P->next = NULL;
    }
};

void read(stack &S) {
    if(stackEmpty(S)) cout << "Empty Stack";
    else {
        while(!stackEmpty(S)) {
            cout << S.top->info << " ";
            pop(S);
        }
    }
};
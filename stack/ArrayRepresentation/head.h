#include <iostream>

#define ln cout << endl
#define max 10

using namespace std;

struct stack {
    int info[max];
    int top;
};

void createStack(stack &S) {
    S.top = -1;
};

bool isEmpty(stack S) {
    return S.top == -1;
};

bool isFUll(stack S) {
    return S.top == max - 1;
}

void push(stack &S, int a) {
    if(S.top == max) cout << "Full Stack";
    else {
        S.top++;
        S.info[S.top] = a;
    }
};

void pop(stack &S) {
    if(isEmpty(S)) cout << "Empty Stack";
    else {
        S.top--;
    }
};

void read(stack S) {
    if(isEmpty(S)) cout << "Empty Stack";
    else {
        while(!isEmpty(S)) {
            cout << S.top << " ";
            pop(S);
        }
    }
};

// bool find(stack S, int x) {
//     if(!isEmpty(S)) {
//         while(S.top != x) pop(S);
//         return S.top != -1;
//     } else return 0;
// }
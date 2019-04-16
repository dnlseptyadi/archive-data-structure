#include <iostream>

using namespace std;

typedef struct node *address;

struct node {
    int info;
    address left;
    address right;
};

address allocate(int x) {
    address P = new node;
    P->info = x;
    P->right = NULL;
    P->left = NULL;
    return P;
};

void insertNode(address &root, address x) {
    if(root == NULL) root = x;
    else if(x->info > root->info) insertNode(root->right, x);
    else if(x->info < root->info) insertNode(root->left, x);
};

void preOrder(address &root) {
    if(root != NULL) {
        cout << root->info << "-";
        preOrder(root->left);
        preOrder(root->right);
    }
};

void postOrder(address &root) {
    if(root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->info << "-";
    }
};

void inOrder(address &root) {
    if(root != NULL) {
        inOrder(root->left);
        cout << root->info << "-";
        inOrder(root->right);
    }
};

int depth(address root) {
    if(root == NULL) return 0;
    else {
        int left = depth(root->left) + 1;
        int right = depth(root->right) + 1;
        return (left > right) ? left : right;
    }
};

int depthX(address root, int x) {
    if(root->info == x || root == NULL) return 0;
    else
        if(x > root->info) return depthX(root->right, x) + 1;
        else if(x < root->info) return depthX(root->left, x) + 1;
};

address findNode(address &root, int x) {
    if(root != NULL) {
        if(root->info == x) return root;
        else if(x > root->info) findNode(root->right, x);
        else if(x < root->info) findNode(root->left, x);
    } else return NULL;
};

void printDescandant(address &root, int x) {
    if(root != NULL) {
        address P = findNode(root, x);
        if(P != NULL) {
            if(P->info % 2 == 0) postOrder(P);
            else preOrder(P);
        } else cout << "Node Not Found" << endl;
    }
};

void printLevel(address &root, int x) {
    if(root != NULL)
        if(x == 1) cout << root->info << "-";
        else if(x > 1) {
            printLevel(root->left, x-1);
            printLevel(root->right, x-1);
        }
};

void printLevelOrder(address &root) {
    if(root != NULL) {
        for(int i = 1;i <= depth(root);i++) {
            cout << "Level " << i-1 << " : ";
            printLevel(root, i);
            cout << endl;
        }
    }
};
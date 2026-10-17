#include <iostream>
using namespace std;

struct Node 
{
    int id, h;
    Node *left, *right;
};

int height(Node* n) 
{
    return n ? n->h : 0;
}

Node* create(int id) 
{
    Node* n = new Node{id, 1, NULL, NULL};
    return n;
}

void update(Node* n) 
{
    n->h = 1 + max(height(n->left), height(n->right));
}

int balance(Node* n) 
{
    return height(n->left) - height(n->right);
}

void display(Node* n) 
{
    if (!n) return;
    cout << n->id << " ";
    display(n->left);
    display(n->right);
}

Node* rightRotate(Node* y) 
{
    cout << "\nBefore LL rotation: ";
    display(y);

    Node* x = y->left;
    y->left = x->right;
    x->right = y;

    update(y);
    update(x);

    cout << "\nAfter LL rotation: ";
    display(x);
    cout << endl;
    return x;
}

Node* leftRotate(Node* x) 
{
    cout << "\nBefore RR rotation: ";
    display(x);

    Node* y = x->right;
    x->right = y->left;
    y->left = x;

    update(x);
    update(y);

    cout << "\nAfter RR rotation: ";
    display(y);
    cout << endl;
    return y;
}

Node* insert(Node* root, int id) 
{
    if (!root) return create(id);

    if (id < root->id)
        root->left = insert(root->left, id);
    else if (id > root->id)
        root->right = insert(root->right, id);
    else
        return root;

    update(root);
    int b = balance(root);

    if (b > 1 && id < root->left->id)
        return rightRotate(root);

    if (b < -1 && id > root->right->id)
        return leftRotate(root);

    return root;
}

int main() 
{
    Node* root = NULL;
    int choice, id;

    do 
{
        cout << "\n1. Allocate Bed";
        cout << "\n2. Display Beds";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) 
{
            cout << "Enter Bed ID: ";
            cin >> id;
            root = insert(root, id);
        }
        else if (choice == 2) 
{
            cout << "Bed IDs (Preorder): ";
            display(root);
            cout << endl;
        }
    } while (choice != 3);

    return 0;
}

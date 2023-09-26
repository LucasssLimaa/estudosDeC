#include <iostream>

using namespace std;

typedef struct Node{
    int value;
    struct Node *next;
} Node;

Node *head = NULL;

bool isEmpty() {
    if(head == NULL) {
        return true;
    } else {
        return false;
    }
}

void push() {

    Node *newNode = new Node;

    cout << "Enter an int value: ";
    cin >> newNode->value;

    newNode->next = head;
    head = newNode;
    
}

void pop() {

    Node *newNode = head;

    if(isEmpty()) {
        cout << "List is Empty!" << endl;
    } else {
        head = head->next;
        cout << "Element " << newNode->value << " was removed" << endl;
        delete (newNode);
    }

}

void showStack() {

    Node *auxNode = head;

    if(isEmpty()) {
        cout << "Stack is empty!!" << endl;
    } else {
        while(auxNode != NULL) {
            cout << auxNode->value << endl;
            auxNode = auxNode->next;
        }
    }
}

int main() {

    int op, value;

    do
    {
        cout << "Choose '1' to push, '2' to pop, '3' to see the Stack or '0' to quit: ";
        cin >> op;

        switch (op)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            showStack();
            break;
        }

    } while (op != 0);

    return 0;
}

/*Implemente uma função que tenha como valor de retorno o comprimento de uma lista encadeada, 
isto é, que calcule o número de nós de uma lista.*/

#include <iostream>

using namespace std;

typedef struct Node{
    int value;
    struct Node *next;
} Node;

Node *head = NULL;
Node *tail = NULL;

bool isEmpty() {
    if(head == NULL) {
        return true;
    } else {
        return false;
    }
}

void enqueue() {

    Node *aux, *newNode = new Node;

    cout << "Enter a Value: ";
    cin >> newNode->value;
    newNode->next = NULL;

    if(isEmpty()) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void dequeue() {
    
    Node *oldHead;

    if(isEmpty()) {
        cout << "Empty List!" << endl;
    } else {
        oldHead = head;
        head = oldHead->next;
        cout << "Element " << oldHead->value << " was removed" << endl;
        delete(oldHead);
    }
}

void showQueue() {

    Node *auxNode;

    if(isEmpty()) {
        cout << "Empty List!" << endl;
    } else {
        auxNode = head;
        while(auxNode != NULL) {
            cout << auxNode->value << endl;
            auxNode = auxNode->next;
        }
    }
}

int queueSize() {

    Node *auxNode;
    int size = 0;

    if (isEmpty()) {
        return size;
    } else {
        auxNode = head;
        while (auxNode != NULL) {
            size++;
            auxNode = auxNode->next;
        }
    }

    return size;
}

int main() {

    int op, value;

    do {
        cout << "Choose '1' to enqueue, '2' to dequeue, '3' to see the queue, '4' to see the queue size or '0' to quit: ";
        cin >> op;

        switch (op) {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            showQueue();
            break;
        case 4:
            cout << "Queue's size is " << queueSize() << endl;
            break;
        }

    } while (op != 0);

    return 0;
}

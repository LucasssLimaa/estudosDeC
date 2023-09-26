#include <iostream>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
} Queue;

using namespace std;

Queue *createQueue()
{

    Queue *queue = new Queue;

    queue->head = NULL;
    queue->tail = NULL;

    return queue;
}

bool isEmpty(Queue *queue)
{
    if (queue->head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(Queue *queue)
{

    Node *aux, *newNode = new Node;

    cout << "Enter a Value: ";
    cin >> newNode->value;
    newNode->next = NULL;

    if (isEmpty(queue))
    {
        queue->head = newNode;
        queue->tail = newNode;
    }
    else
    {
        queue->tail->next = newNode;
        queue->tail = newNode;
    }
}

void dequeue(Queue *queue)
{

    Node *oldHead;

    if (isEmpty(queue))
    {
        cout << "Empty List!" << endl;
    }
    else
    {
        oldHead = queue->head;
        queue->head = oldHead->next;
        cout << "Element " << oldHead->value << " was removed" << endl;
        delete (oldHead);
    }
}

void showQueue(Queue *queue)
{

    Node *auxNode;

    if (isEmpty(queue))
    {
        cout << "Empty List!" << endl;
    }
    else
    {
        auxNode = queue->head;
        while (auxNode != NULL)
        {
            cout << auxNode->value << endl;
            auxNode = auxNode->next;
        }
    }
}   

Queue *removeNode(Queue *queue, int N) {

    Node *auxNode, *beforeAux;
    int valueFound = 0;

    auxNode = beforeAux = queue->head;

    if(isEmpty(queue)) {
        cout << "List is Empty!!" << endl;
    } else {
        while(auxNode != NULL) {
            if(auxNode->value == N) {
                valueFound = 1;
                if(auxNode == queue->head) {
                    dequeue(queue);
                    break;
                } else {
                    beforeAux->next = auxNode->next;
                    free(auxNode);
                    break;
                }
            } else {
                beforeAux = auxNode;
                auxNode = auxNode->next; 
            }
        }
    }

    if (valueFound == 0) {
        cout << "Value not found" << endl;
    }
    

    return queue;
}

int main() {

    Queue *queue = createQueue();
    int op, N;

    do {
        cout << "Choose '1' to enqueue, '2' to dequeue, '3' to see the queue, '4' to delete all 'N' values or '0' to quit: ";
        cin >> op;

        switch (op)
        {
        case 1:
            enqueue(queue);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            showQueue(queue);
            break;
            ;
        case 4:
            cout << "Choose a value to delete from the list: " << endl;
            cin >> N;
            showQueue(removeNode(queue, N));
            break;
        }

    } while (op != 0);

    return 0;
}
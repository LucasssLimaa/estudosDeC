#include <iostream>

using namespace std;

typedef struct Node {
    int value;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    int size;
} Queue;

bool isEmpty(Queue *queue) {
    return (queue->size == 0);
}

Queue *createQueue() {

    Queue *queue = new Queue;

    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;

    return queue;
}

void enqueue(Queue *queue, int value) {

    Node *newNode = new Node;

    newNode->value = value;
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

    queue->size++;
}

void dequeue(Queue *queue){

    if (isEmpty(queue))
    {
        cout << "\nEmpty List!\n";
    }
    else
    {

        Node *oldHead = queue->head;
        queue->head = oldHead->next;
        int value = oldHead->value;
        delete (oldHead);

        cout << "\nThe element " << value << " was removed\n";

        queue->size--;
    }
}

void showQueue(Queue *queue){

    if (isEmpty(queue))
    {
        cout << "Empty List!!" << endl;
    }
    else
    {
        Node *auxHead = queue->head;
        for (int i = 0; i < queue->size; i++)
        {
            cout << auxHead->value << endl;
            auxHead = auxHead->next;
        }
    }
}

int biggerThanN(Queue *queue) {

    Node *auxNode = new Node;
    int N, count = 0;

    cout << "Enter N Value: " << endl;
    cin >> N;

    auxNode = queue->head;

    while(auxNode != NULL) {
        if(auxNode->value > N) {
            count++;
        }
        auxNode = auxNode->next;
    }  

    return count;
}

int main()
{

    Queue *queue = createQueue();
    int op, value;

    do
    {
        cout << "Choose '1' to enqueue, '2' to dequeue, '3' to see the queue, '4' see the values bigger than 'N' or '0' to quit: ";
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Choose a value to enqueue: " << endl;
            cin >> value;
            enqueue(queue, value);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            showQueue(queue);
            break;
            ;
        case 4:
            cout << biggerThanN(queue) << " value(s) bigger than N" << endl;
            break;
        }

    } while (op != 0);

    return 0;
}
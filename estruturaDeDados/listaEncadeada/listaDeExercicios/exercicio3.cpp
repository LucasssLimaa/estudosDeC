#include <iostream>

using namespace std;

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

typedef struct
{
    Node *head;
    Node *tail;
    int size;
} Queue;

bool isEmpty(Queue *queue)
{
    return (queue->size == 0);
}

Queue *createQueue()
{

    Queue *queue = new Queue;

    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;

    return queue;
}

void enqueue(Queue *queue, int value)
{

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

void dequeue(Queue *queue)
{

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

void showQueue(Queue *queue)
{

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

Queue *concatenate(Queue *queue, Queue *queue2)
{

    Queue *newQueue = createQueue();
    Node *auxNode = new Node;

    auxNode = queue->head;

    while (auxNode != NULL)
    {
        enqueue(newQueue, auxNode->value);
        auxNode = auxNode->next;
    }

    auxNode = queue2->head;

    while (auxNode != NULL)
    {
        enqueue(newQueue, auxNode->value);
        auxNode = auxNode->next;
    }

    return newQueue;
}

int main()
{

    Queue *queue = createQueue();
    Queue *queue2 = createQueue();
    int op, value;

    do
    {
        cout << "Choose '1' to use first queue, '2' to second, '3' to concanate both, or '4' to quit: " << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            do
            {
                cout << "Choose '1' to enqueue, '2' to dequeue, '3' to see the queue or '0' to quit: ";
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
                }
            } while (op != 0);
            break;

        case 2:
            do
            {
                cout << "Choose '1' to enqueue, '2' to dequeue, '3' to see the queue or '0' to quit: ";
                cin >> op;

                switch (op)
                {
                case 1:
                    cout << "Choose a value to enqueue: " << endl;
                    cin >> value;
                    enqueue(queue2, value);
                    break;
                case 2:
                    dequeue(queue2);
                    break;
                case 3:
                    showQueue(queue2);
                    break;
                }
            } while (op != 0);
            break;
        case 3:
            showQueue(concatenate(queue, queue2));
        }

    } while (op != 4);

    return 0;
}
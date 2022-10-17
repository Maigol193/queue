#include "queue.h"

typedef struct node {
    int value;
    struct node *next;
} Node;

struct queue {
    Node *head;
    Node *tail;
};

Node *node_new(int value) {
    Node *new_node = malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

Queue* queue_new(){
    Queue *q = malloc(sizeof(Queue));
    q->head = NULL;
    q->tail = NULL;
    return q;
}

void queue_append(Queue *q, int value) {

    if (!(q->head)) {
        q->head = node_new(value);
        q->tail = q->head;
        return;
    }

    q->tail->next = node_new(value);
    q->tail = q->tail->next;
}

int queue_empty(Queue *q){
    if(q->head){
        return 0;
    }
    return 1;
}

int queue_peek(Queue *q){
    return q->head->value;
}

int queue_remove(Queue *q){
    int a = q->head->value;
    Node *curr = q->head;
    q->head = q->head->next;
    free(curr);
    return a;
}
#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct queue Queue;
Queue *queue_new();
void queue_append(Queue *q, int value);
int queue_empty(Queue *q);
int queue_peek(Queue *q);
int queue_remove(Queue *q);

#endif //QUEUE_QUEUE_H
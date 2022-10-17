#include <stdio.h>
#include "queue.h"
int main() {
  Queue *q = queue_new();
  for(int i = 0; i < 999; i++)
    queue_append(q, i);
  while(!queue_empty(q))
  {
    if(queue_peek(q) % 2 == 0)
      queue_remove(q);
    else
      printf("%d ", queue_remove(q));
  }
  return 0;
}
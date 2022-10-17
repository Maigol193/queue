#include <stdio.h>
#include "queue.h"
int main() {
  Queue *q = queue_new();
  for(int i = 0; i < 999; i++)
    queue_append(q, i);
  while(!queue_empty(q))
  {
      int a = queue_remove(q);
      if(a % 2 != 0)
        printf("%d ", a);
  }
  return 0;
}
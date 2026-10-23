#include <stdio.h>

#include "stack.h"
#include "queue.h"

int main(void)
{
    /*
     * STACK
     */

    Stack stack;

    stack_init(&stack);

    stack_push(&stack, 10);
    stack_push(&stack, 20);
    stack_push(&stack, 30);

    printf("=== STACK ===\n");

    stack_print(&stack);

    printf("Stack size: %d\n", stack.size);

    int value;

    if (stack_peek(&stack, &value)) {
        printf("Top: %d\n", value);
    }

    if (stack_pop(&stack, &value)) {
        printf("Popped: %d\n", value);
    }

    stack_print(&stack);

    stack_free(&stack);


    /*
     * QUEUE
     */

    Queue queue;

    queue_init(&queue);

    queue_enqueue(&queue, 10);
    queue_enqueue(&queue, 20);
    queue_enqueue(&queue, 30);

    printf("\n=== QUEUE ===\n");

    queue_print(&queue);

    printf("Queue size: %d\n", queue.size);

    if (queue_peek(&queue, &value)) {
        printf("Front: %d\n", value);
    }

    if (queue_dequeue(&queue, &value)) {
        printf("Dequeued: %d\n", value);
    }

    queue_print(&queue);

    queue_free(&queue);

    return 0;
}
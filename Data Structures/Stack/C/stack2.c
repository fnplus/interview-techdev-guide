#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct Stack
{
    int *items;
    unsigned int capacity;
    int head;
};

// Stack is full when head is equal to the last index
int isFull(struct Stack *stack)
{
    return stack->head == stack->capacity - 1;
}

// Stack is empty when head is equal to -1
int isEmpty(struct Stack *stack)
{
    return stack->head == -1;
}

// Function to add an item to stack.  It increases head by 1
void push(struct Stack *stack, int item)
{
    if (isFull(stack))
        return;
    stack->items[++stack->head] = item;
}

// Function to remove an item from stack.  It decreases head by 1
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->items[stack->head--];
}

// Function to return the head from stack without removing it
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->items[stack->head];
}

struct Stack *makeStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->head = -1;
    stack->items = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int main()
{
    struct Stack *stack = makeStack(100);

    push(stack, 10);
    printf("%d pushed to stack\n", 10);
    push(stack, 20);
    printf("%d pushed to stack\n", 20);
    push(stack, 30);
    printf("%d pushed to stack\n", 30);

    printf("%d popped from stack\n", pop(stack));
    return 1;
}
//Template
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int nData;
    struct Node* next;
}Node;

typedef struct Stack {
    Node* top;
}Stack;

void InitializeStack(Stack* stack);
void Push(Stack* stack, int nData);
int Pop(Stack* stack);
void PrintStack(Stack* stack);

int main(void) {
    Stack s;
    InitializeStack(&s);
    Push(&s, 1);
    Push(&s, 3);

    Push(&s, 2);
    Push(&s, 4);

    PrintStack(&s);

    Pop(&s);

    PrintStack(&s);

    return 0;
}

void InitializeStack(Stack* stack) {
    stack->top = NULL;
}

void Push(Stack* stack, int nData) {
    Node* tmp = (Node*)malloc(sizeof(Node));
    tmp->nData = nData;

    tmp->next = stack->top;
    stack->top = tmp;
}

int Pop(Stack* stack) {
    Node* tmp;
    int num;
    tmp = stack->top;

    num = tmp->nData;
    stack->top = stack->top->next;
    free(tmp);

    return num;
}

void PrintStack(Stack* stack) {
    Node* index = stack->top;

    printf("Stack : ");
    while (index != NULL) {
        printf("%d ", index->nData);
        index = index->next;
    }
    printf("\n");
}
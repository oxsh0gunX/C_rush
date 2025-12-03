#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

// PUSH
void push(int val) {
    if (top == MAX - 1) {
        printf("Stack Full!\n");
        return;
    }
    top++;
    stack[top] = val;
    printf("%d pushed\n", val);
}

// POP
void pop() {
    if (top == -1) {
        printf("Stack Empty!\n");
        return;
    }
    printf("%d popped\n", stack[top]);
    top--;
}

// PEEK
void peek() {
    if (top == -1) {
        printf("Stack Empty!\n");
        return;
    }
    printf("Top = %d\n", stack[top]);
}

// DISPLAY
void display() {
    if (top == -1) {
        printf("Stack Empty!\n");
        return;
    }
    printf("Stack: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, val;

    while (1) {
        printf("\n1.Push  2.Pop  3.Peek  4.Display  5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Value: ");
                scanf("%d", &val);
                push(val);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice");
        }
    }
}


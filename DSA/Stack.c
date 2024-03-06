#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    int stack[SIZE];
    int data, choice, i;
    int top = 0;

    while (1) {
        printf("\n 1.PUSH Element");
        printf("\n 2.POP Element");
        printf("\n 3.VIEW Element");
        printf("\n 4.Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top < SIZE) {
                    printf("\n Enter any element: ");
                    scanf("%d", &data);
                    stack[top] = data;
                    top++;
                } else {
                    printf("\n Stack is full");
                }
                break;

            case 2:
                if (top > 0) {
                    top--;
                    printf("The element popped is %d", stack[top]);
                } else {
                    printf("The stack is empty");
                }
                break;

            case 3:
                if (top == 0) {
                    printf("\n Stack is empty");
                } else {
                    for (i = top - 1; i >= 0; i--) {
                        printf("%d\n", stack[i]);
                    }
                }
                break;

            case 4:
                exit(0);
                printf("\n Invalid option. Please choose options 1-4");
        }
    }

    return 0;
}


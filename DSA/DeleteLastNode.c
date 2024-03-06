#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
void add_at_end(struct node *head, int data); 
struct node *del_last(struct node *head);

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    add_at_end(head, 98);
    add_at_end(head, 3);
    
    head = del_last(head);

    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }
    return 0;
}
void add_at_end(struct node *head, int data){
	struct node *ptr, *temp;
	ptr= head;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	while(ptr->link !=NULL){
		ptr= ptr->link;
	}
	ptr->link= temp;
}
struct node *del_last(struct node *head) {
    if (head == NULL) {
        printf("List is already empty!");
    } else if (head->link == NULL) {
        free(head);
        head = NULL;
    } else {
        struct node *temp = head;
        struct node *temp2 = NULL;
        
        while (temp->link != NULL) {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}


#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#define SIZE 5
int main()
{
	int queue[SIZE];
	int data, i , choice;
	int rear= 0;
	int front= 0;
	while(1)
	{
		printf("\n 1.Insert Element");
		printf("\n 2.Delete Element");
		printf("\n 3.View Element");
		printf("\n 4.Exit");
		printf("\n Enter your choice:");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				if(rear<SIZE)
				{
					printf("Enter any data");
					scanf("%d",&data);
					queue[rear]= data;
					rear++;
				}
				else
				{
					printf("Queue is full");
				}
				break;
					case 2:
						if(front<rear)
						{
							printf("The deleted element is %d",queue[front]);
							front++;
						}
						else
						{
							printf("Queue is empty");
						}
						break;
						case 3:
							if(rear>front)
							{
								printf("\n Elements are");
								for (i= front; i<rear; i++)
								{
									printf("\n %d",queue[i]);
								}
							}
							else
							{
								printf("Queue is empty");
							}
							break;
							case 4:
								exit(0);
								default:
									printf("Enter correct choice 1-4");
		}
	}
}

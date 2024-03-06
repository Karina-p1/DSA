#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#define SIZE 5
int main()
{
	int cqueue[SIZE];
	int data, i ,j , choice;
	int rear= 0;
	int front= 0;
	int count= 0;
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
				if(count<SIZE)
				{
					printf("Enter any data");
					scanf("%d",&data);
					cqueue[rear]= data;
					rear= (rear+1)%SIZE;
					count++;
				}
				else
				{
					printf("Queue is full");
				}
				break;
					case 2:
						if(count>0)
						{
							printf("The deleted amount is %d",cqueue[front]);
							front= (front+1)%SIZE;
							count--;
						}
						else
						{
							printf("Queue is empty");
						}
						break;
						case 3:
							if(count>0){
							i= front;
							j= 0;
							while(j<count){
								printf("\n %d", cqueue[i]);
								i= (i+1)%SIZE;
								j++;
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

//  normal queue
#include<stdio.h>
#include<stdlib.h>
void insert();
void del();
void display();
void exit();
int a[10],front=-1,rear=-1;
void main() 
{
    int ch;
    printf("\n1. Insert Elements ");
    printf("\n2. Delete Elements ");
    printf("\n3. display Elements ");
    printf("\n4. Exit ");
    printf("\n Enter your choice ");
    scanf("%d",&ch);
    switch(ch) 
    {
        case 1:insert();
                break;
        case 2:del();
                break;
        case 3:display();
                break;
        case 4:exit(1);
                break;
        default: printf("Wrong choice ");
    }
    main();
}
void insert() 
{
    int value;
    printf("Enter your elements ");
    scanf("%d",&value);
    if(front==-1)
    {
        front=0;
        rear=0;
        a[rear]=value;
    }
    else if(rear>=9)
    {
        printf("Queue is Overflow ");
    }
    else
    {
        rear++;
        a[rear]=value;
    }
}

void del()
{
    int value;
    if(front==-1)
    {
        printf("UnderFlow");
    }
    else if(front==rear)
    {
        printf("%d is deleted ",a[front]);
        front=rear=-1;
    }
    else
    {
        printf("%d is deleted ",a[front]);
        front++;
    }
}


void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",a[i]);
    }
}
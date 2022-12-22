//stack
#include<stdio.h>
#include<stdlib.h>
#define max 10
int top=-1,a[max];
void push();
void pop();
void display();
int main()
{
    int ch;
    printf("\n 1. Push ");
    printf("\n 2. Pop ");
    printf("\n 3. Display ");
    printf("\n 4. Exit ");
    printf("\n Enter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: exit(0);
                break;
        default: printf("wrong Choice ");
    }
    return 0;
    main();
}
void push()
{
    int i, num;
    if(top>=max-1)      
    {
        printf("Stack is overflow");
    }
    else
    {
        top=top+1;
        scanf("%d", &num);
        printf("enter your elements ");
        scanf("%d",&a[top]);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("UnderFlow");
    }
    else
    {
        printf("%d is deleted",a[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }
}
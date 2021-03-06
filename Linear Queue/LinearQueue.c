//Linear Queue implementation
#include<stdio.h>
#define MAX 10
void EnQueue(int a[],int *rear,int *front)
{
    if(*rear==MAX-1)
    {
        ("NO Space Queue full\n");
    }
    else
    {
        *rear+=1;
        if(*rear==0)
           *front=0;
        printf("Enter the element to be inserted\n");
        scanf("%d",&a[(*rear)]);
    }
}
void DeQueue(int a[],int *rear,int *front)
{
     if(*front == -1)
     {
        printf("Queue is empty\nNo element to delete\n");
     }
     else if(*rear == *front)
     {
        printf("%d is getting deleted\n",a[(*front)]);       
        *front = *rear = -1;
     }
     else
     {
        printf("%d is getting deleted\n",a[(*front)]);
        *front +=1;
     }
}
void Peek(int a[],int *front)
{
     if(*front==-1)
     {
        printf("Queue is empty\n");
     }
     else
     {
        printf("%d is the first element\n",a[(*front)]);
     }
}
void Display(int a[],int *rear,int *front)
{
     if(*front==-1)
     {
        printf("Queue is empty\n");
     }
     else
     {
        printf("Elements in Queue are:\n");     
        for(int i=*front;i<*rear;i++)
        {
           printf("%d\n",a[i]);
        }
     }
}
int main()
{
    int a[MAX],c=0,rear,front;
    
    rear=front=-1;
    do
    {
       printf("Queue operations are:\n  1.EnQueue\n  2.DeQueue\n  3.Peek\n4.Display\n  0.Exit\n");
       printf("Enter your choice:");
       scanf("%d",&c);
          switch(c) 
          {
              case 1:
                   EnQueue(a,&rear,&front);
                   break;
              case 2:
                   DeQueue(a,&rear,&front);
                   break;
              case 3:
                   Peek(a,&front);
                   break;
              case 4:
                   Display(a,&rear,&front);
                   break;
              case 0:
                   return 0;
              default:
                   printf("Wrong Choice!!\n");
          }     
     }while(c);
    
}

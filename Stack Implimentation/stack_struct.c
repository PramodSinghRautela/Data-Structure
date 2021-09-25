#include<stdio.h>
#define MAX 10
typedef struct{
  int data;
}st;
void PUSH(st arr[],int *top)
{
       if(*top==MAX-1)
            printf("Stack is full\n");
       else{
            *top +=1;
            printf("Enter the element:");
            scanf("%d",&arr[(*top)].data);
            }
}
void POP(st arr[],int *top)
{
       if(*top==-1)
            printf("Stack is empty\n");
       else            
            {
            printf("%d is being deleted\n",arr[(*top)].data);
            *top-=1;
            }
}
void PEEK(st arr[],int *top)
{
       if(*top==-1)
         printf("Stack is empty\n");
       else
         printf("%d is the top element\n",arr[(*top)].data);
}
void DISPLAY(st arr[],int *top)
{
       if(*top==-1)
          printf("Stack is full nothing to display\n");
       else
          printf("Elements in stack are:\n");
          for(int i=(*top);i!=-1;i--)
            printf("%d\n",arr[(*top)].data);
}
int main()
{
   st arr[MAX];
   int top=-1,c=0;
   do 
   {
     printf("Stack operations:\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n0.EXIT\n");
     printf("\nEnter your choice:\n");
     scanf("%d",&c);
     
   switch(c)
   {
        case 1:
             PUSH(arr,&top);
             break;
        case 2:
             POP(arr,&top);
             break;
        case 3:
             PEEK(arr,&top);
             break;
        case 4:
             DISPLAY(arr,&top);
             break;
        case 0:
             return 0;
        default:
             printf("Invalid choice\n");
   }
   }while(c);
}

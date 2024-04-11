#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
} *top = NULL;


void push(int data)
{
   struct node *new_node;
   new_node = malloc(sizeof(new_node));
   if (new_node == NULL)
   {
     printf("stack overflow\n");
     exit(1);
   }
   new_node->data = data;
   new_node->next = NULL;
   
   new_node->next = top;
   top = new_node;
}


void print()
{
  struct node *temp;
  temp = top;

  printf("The stack elements are: ");
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}


int main(void)
{
  int choice, data;

  while (1)
  {
    printf("\n");
    printf("1. Push\n");
    printf("2. Print\n");
    printf("3. Quit\n");
    printf("Enter your Choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
      case 1:
        printf("Enter the element to be pushed: ");
        scanf("%d", &data);
        push(data);
        break;
  
      case 2:
        print();
        break;
    
      case 3:
        exit(1);
        break;
      
      default:
        printf("wrong choice\n");
        break;
    }
  }
  return (0);
}
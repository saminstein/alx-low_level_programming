#include "header.h"

int stack_arr[MAX];
int top = -1;

/*
int main(void)
{
  int data;

  push(1);
  push(2);
  push(3);
  push(4);

  data = pop();
  data = pop();
  printf("%d", data);
  return (0);
}
*/


int main(void)
{
  int choice, data;

  while (1)
  {
    printf("\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Print the top element\n");
    printf("4. print all the elements of the stack\n");
    printf("5. Quit\n");
    printf("Enter your Choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
      case 1:
        printf("Enter the element to be pushed: ");
        scanf("%d", &data);
        push(data);
        break;
  
      case 2:
        data = pop();
        printf("Deleted element is %d\n", data);
        break;
    
      case 3:
        printf("The top most element of the stack %d\n", peek());
        break;
      
      case 4:
        print();
        break;
      
      case 5:
        exit(1);

      default:
        printf("wrong choice\n");
    }
  }
  return (0);
}

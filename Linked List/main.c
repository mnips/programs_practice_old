#include<stdlib.h>
#include<stdio.h>

void addlist(struct node **head,int n)
{
struct node* new_node = (struct node*) malloc(sizeof(struct));
struct node* current=(struct node*)malloc(sizeof(struct));

new_node->data=n;
new_node->next=NULL;
}
struct node
{int data;
 struct node *next;
}
int main()
{
printf("Enter the elements of the list:\n");
 struct node *head=NULL;
 while(1)
 {char ch;
 printf("Do you want to enter an element:\t");
scanf("%c",ch);
  if(ch!='y')
  break;
  else
  {printf("Enter the element you want to add to list:\t");
   int num;
   scanf("%d",num);
   addlist(&head,num);
  }
 }
}

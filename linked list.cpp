#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
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
{int __a3;
int __3a;
int __A3;
cout<<"Enter the elements of the list:\n";
 struct node *head=NULL;
 while(true)
 {char ch;
 cout<<"Do you want to enter an element:\t";
  cin>>ch;
  if(ch!='y')
  break;
  else
  {cout<<"Enter the element you want to add to list:\t";
   int num;
   cin>>num;
   addlist(&head,num);
  }
 }
}

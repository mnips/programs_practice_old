#include<stdio.h>
#include<iostream>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};
static int lenlist=0;
void printlist(struct node * h)
{struct node *ptr;
ptr=h;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
}
void merge(struct node **head1,struct node **head2)
{
	struct node *ptr1,*ptr2,*temp,*prev=NULL;
	ptr1=*head1;
	ptr2=*head2;
	temp=ptr2;
	while(ptr1!=NULL&&ptr2!=NULL)
	{
		if(ptr1->data<ptr2->data)
		{prev=ptr1;
		ptr1=ptr1->next;
		}
		else
		{temp=ptr2;
		 ptr2=ptr2->next;
		 temp->next=ptr1;
		 if(prev==NULL)
		 {*head1=temp;
		 }
		 else
		 {prev->next=temp;
		 }
		 prev=temp;
		 
		}
	}

	while(ptr2!=NULL)
	{prev->next=ptr2;
	prev=ptr2;
	ptr2=ptr2->next;
	}
	
	
}
void reverse(struct node **headref)
{	
	struct node *ptr=*headref,*ttemp,*temp;
	ttemp=ptr->next;
	temp=ttemp;
	if(ptr==NULL)return;
	ptr->next=NULL;
	while(temp!=NULL)
	{
	    temp=temp->next;
	    ttemp->next=ptr;
	    ptr=ttemp;
	    ttemp=temp;
	}
	
	*headref=ptr;
	
}
//VERY VERY IMPORTANT
void swapp(struct node **headref,int key1,int key2)
{	if(key1==key2)return;
	int pos1=0,pos2=0,i=1;
	struct node *temp=*headref,*temp2,*prev1,*prev2,*curr1=NULL,*curr2=NULL;
	if(temp->data==key1)
	{curr1=temp;
	prev1=NULL;
	}
	if(temp->data==key2)
	{curr2=temp;
	prev2=NULL;
	}
	
	while((temp->next)!=NULL)
	{if((temp->next)->data==key1)
	 {curr1=temp->next;
	  prev1=temp;
	 //pos1=i;
	 }
	 if((temp->next)->data==key2)
	 {curr2=temp->next;
	 prev2=temp;
	 //pos2=i;
	 }
	 temp=temp->next;
	}
	temp=*headref;
//	printlist(*headref);
	if(curr1==NULL||curr2==NULL)
	{
	printf("Not both keys present\n");
	return;
	}
	struct node *ptrtemp;
	if(curr1==curr2)return;
	if(prev1!=NULL)
	prev1->next=curr2;
	else
	*headref=curr2;
	
	if(prev2->next!=NULL)
	prev2->next=curr1;
	else
	*headref=curr1;
	//swap pointers:-
	ptrtemp=curr2->next;
	curr2->next=curr1->next;
	curr1->next=ptrtemp;
	//printlist(*headref);
	
}
int recursivelen(struct node *head)
{//The code commented is also fine
   /*if(head!=NULL)
	{lenlist++;
	 recursivelen(head->next);
	}
	else
	return lenlist;
	
	*/
	if(head==NULL)
	{return 0;
	}
	else
	{return 1+recursivelen(head->next);
	}
	
}
int length(struct node *head)
{
	int len=0;
	struct node *ptr=head;
	while(ptr!=NULL)
	{len++;
	ptr=ptr->next;
	}
	return len;
	
}

void delfirstnode(struct node **headref)
{
	if(*headref==NULL)
	return;
	struct node *temp=*headref;
	struct node *nextnode=temp->next;
	*headref=nextnode;
	free(temp);
}
//IMPORTANT
void delpos(struct node **headref,int pos)
{	if(*headref==NULL)
	return;
	int i=0;
	struct node *temp=*headref,*nextnode;
	if(pos==0)
	{*headref=temp->next;
	free(temp);
	return;
	}
	while(temp!=NULL&&i<pos-1)
	{
	temp=temp->next;
	printf("%d",temp->data);
	i++;
	}
	if(temp==NULL||temp->next==NULL)
	return;
	
	nextnode=(temp->next)->next;
	free(temp->next);
	temp->next=nextnode;
	
	
}
void del(struct node **headref,int key)
{
	struct node *temp=*headref,*prev;
	if(temp!=NULL && temp->data==key)
	{*headref=temp->next;
	 free(temp);
	 return;
	}
	while(temp!=NULL &&temp->data!=key)
	{prev=temp;
	temp=temp->next;
	}
	if(temp==NULL)
	return;
	
	prev->next=temp->next;
	free(temp);
	return;
	
}
void insafter(struct node *prev_node,int value)
{
	if(prev_node==NULL)
	{printf("Previous node does not exist\n");
	return;
	}
	struct node *n=(struct node*)malloc(sizeof(struct node));
	n->data=value;
	n->next=prev_node->next;
	prev_node->next=n;
}
void insback(struct node **ptr,int value)
{ //If tail ptr given then:-  ptr=tailreference in parameter
	/*struct node *n=(struct node*)malloc(sizeof(struct node));
	n->data=value;
	n->next=NULL;
	(*tailreference)->next=n;
	*tailreference=n;
	*/
  // If tail ptr not given:-
  struct node *ntemp=(struct node*)malloc(sizeof(struct node));
  struct node *n=(struct node*)malloc(sizeof(struct node));
  ntemp->data=value;
  ntemp->next=NULL;
   n=(*ptr);//for traversal and finding last node
  if(*ptr==NULL)
  {*ptr=n;
  return;
  }
  while(n->next!=NULL)
  {
  	n=n->next;
  }
  n->next=ntemp;
  return;
	
}
void insfront(struct node **headreference, int value)
{
	struct node *n=(struct node*)malloc(sizeof(struct node));
	n->data=value;
	n->next=*headreference;
	*headreference=n;
	printlist(*headreference);
}
int main()
{
	struct node *head=NULL,*head2;
	struct node *tail=NULL,*node1,*node2;
	struct node *current=NULL;
	// basically head,tail and current are pointers to node which are initialized as below
	head =(struct node*)malloc(sizeof(struct node));//declare a new block of node and initialize to pointer head
	tail=(struct node*)malloc(sizeof(struct node));
	current=(struct node*)malloc(sizeof(struct node));
	head->next=current;
	head->data=1;
	tail->next=NULL;
	current->data=10;
	tail->data=3;
	current->next=tail;
	//List 2 for merger operations
	head2 =(struct node*)malloc(sizeof(struct node));
	node1=(struct node*)malloc(sizeof(struct node));
	node2=(struct node*)malloc(sizeof(struct node));
	head2->data=1;
	node1->data=8;
	node2->data=91;
	head2->	next=node1;
	node1->next=node2;
	node2->next=NULL;
	printf("Original list: ");
	printlist(head);
	printf("\nList 2: ");	
	printlist(head2);
	printf("\nList insertion at front: ");
	insfront(&head,5);
	printf("\nList insertion at back: ");
	insback(&tail,9);
	printlist(head);
	printf("\nList insertion after a node: ");
	insafter(head->next,8);
	printlist(head);
	printf("\nList after deleting node given value: ");
	del(&head,8);
	printlist(head);
	printf("\nList after deleting node given position: ");
	delpos(&head,1);
	printlist(head);
	printf("\nLength of list iteratively: ");
	printf("%d ",length(head));
	printf("\nLength of list recursively: ");
	printf("%d ",recursivelen(head));
	printf("\nList after deleting 1st node: ");
	delfirstnode(&head);
	printlist(head);
	printf("\nList after swapping 2 nodes: ");
	insafter(head->next,5);
	insafter(head->next,7);
	swapp(&head,3,9);
	printlist(head);
	printf("\nReversed List: ");
	reverse(&head);
	printlist(head);
	printf("\nMerged List: ");
	merge(&head,&head2);
	printlist(head);
return 0;	
}

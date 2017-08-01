#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int top;
	int len;
	int *arr;
};
struct stack* createStack(int n)
{
	stack * narray=(struct stack*)malloc(sizeof(struct stack));
	narray->len=n;
	narray->top=-1;
	narray->arr=(int *)malloc(n*sizeof(int));
	return narray;
}
int isFull(struct stack * k)
{
	if(k->top==k->len-1)
	return 1;
	else
	return 0;
}
int isEmpty(struct stack *k)
{
	if(k->top==-1)
	return 1;
	else
	return 0;
}
void push(struct stack *k,int item)
{
	if(isFull(k)==1)
	{printf("Stack full\n");
	return;
	}
	k->top++;
	k->arr[k->top]=item;
	
	printf("%d pushed to stack\n",item);
	
}
void pop(struct stack *k)
{
	if(isEmpty(k)==1)
	{
		printf("Stack already empty\n");
		return;
	}
	printf("%d Element popped\n",k->arr[k->top]);
	k->top--;
	
}
void peek(struct stack *k)
{
	printf("Top item is %d\n",k->arr[k->top]);
}
int main()
{
	stack * array=createStack(5);
	pop(array);
	push(array,1);
	push(array,4);
	push(array,5);
	push(array,6);
	push(array,7);
	push(array,10);
	pop(array);
	peek(array);
return 0;
}

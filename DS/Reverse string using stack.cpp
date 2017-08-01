#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct stack{
	int top;
	int len;
	char *arr;
};
struct stack* createStack(int len)
{
	struct stack *stk = (struct stack*)malloc(sizeof(struct stack));
	stk->top=-1;
	stk->len=len;
	stk->arr = (char*) malloc(stk->len * sizeof(char));
	return stk;
}
void push(struct stack *s,char k)
{
	s->arr[++s->top]=k;
}
char pop(struct stack *s)
{
	return s->arr[s->top--];
}
int main()
{	char s[50];int i;
	printf("Enter string: ");
	scanf("%s",&s);
	struct stack *mystk=createStack(strlen(s));
	
	for(i=0;i<strlen(s);i++)
	{
		push(mystk,s[i]);	
	}
	i=0;
	while(i!=strlen(s))
	{
	printf("%c",pop(mystk));
	i++;
	}
	return 0;
}

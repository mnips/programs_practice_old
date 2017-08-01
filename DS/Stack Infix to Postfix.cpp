#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* INFIX TO POSTFIX
1. Scan the infix expression from left to right.
2. If the scanned character is an operand, output it.
3. Else,
…..3.1 If the precedence of the scanned operator is greater than the precedence of the operator in the stack(or the stack is empty), push it.
…..3.2 Else, Pop the operator from the stack until the precedence of the scanned operator is less-equal to the precedence of the operator residing on the top of the stack. Push the scanned operator to the stack.
4. If the scanned character is an ‘(‘, push it to the stack.
5. If the scanned character is an ‘)’, pop and output from the stack until an ‘(‘ is encountered.
6. Repeat steps 2-6 until infix expression is scanned.
7. Pop and output from the stack until it is not empty.
*/

struct stack 
{
	int top;
	int len;
	char * arr;
};
int isEmpty(struct stack* k)
{
    return k->top == -1 ;
}
void push(struct stack* k, char op)
{
    k->arr[++k->top] = op;
}
char pop(struct stack* k)
{
    if (!isEmpty(k))
        return k->arr[k->top--] ;
    return '$';
}
struct stack* createStack( int capacity )
{
    struct stack* k = (struct stack*) malloc(sizeof(struct stack));
 
    if (!k) 
        return NULL;
 
    k->top = -1;
    k->len = capacity;
 
    k->arr = (char*) malloc(k->len * sizeof(char));
 
    if (!k->arr)
        return NULL;
    return k;
}
 
int precedence(char s)
{  
	switch(s)
	{
		case '/':
		case '*' : 
		return 2;
		
		case '+': 
		case '-': 
		return 1;
		
		case '^':
			return 3;
		
		default : return -1;
	}
}
char peek(struct stack* k)
{
    return k->arr[k->top];
}
int isOperand(char l)
{
	switch(l)
	{
		case '+': case '-': case '/':case '*': case ')': case '(' : return 0;
		default: return 1;
	}
}
void scan(char *s,stack * k)
{
	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(isOperand(s[i]))
		{printf("%c",s[i]);
		}
		else if(s[i]=='(')
				{
					push(k,s[i]);
				}
			else if(s[i]==')')
				{
					while(pop(k)!='$'&&pop(k)!='(')
					{printf("%c",pop(k));
					}
					  //if (!isEmpty(k) && peek(k) != '(')
                	//	return -1; // invalid expression                
           			 // else
                		//pop(stack);
				}
		else
		{
			while(!isEmpty(k)&&precedence(s[i])<=precedence(peek(k)))
			printf("%c",pop(k));
			
			push(k,s[i]);
		}
	}
	while(!isEmpty(k))
	printf("%c",pop(k));
}
int main()
{	
	char s[50];
	printf("Enter infix expression:\t");
	scanf("%s",&s);
	stack * narr=createStack(strlen(s));
	scan(s,narr);
}

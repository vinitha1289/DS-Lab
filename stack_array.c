#include<stdio.h>
#include<stdlib.h>
#define size 3
int a[size];
int top=-1;
void push();
void pop();
void show();
void main()
{
	int top=-1,choice;
	while(1)
	{
		printf("enter 1 for push,2 for pop,3 for show,4 or exit");
		scanf("%d",&choice);
		switch(choice)
		{
		case1:push();
		      break;
		case2:pop();
		      break;
		case3:show;
		      break;
		case4:exit()      
			      

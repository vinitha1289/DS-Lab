#define true 1
#define false 0
#include<stdio.h>
#include<stdlib.h>
struct q_point
{
	int ele;
	struct q_point*n;
};
struct q_point*f_ptr=NULL;
int e_que(void);
void add_ele(int);
int rem_ele(void);
void show_ele();
void main()
{
	int ele,choice,j;
	while(1)
	{
		
		printf("\n\n****IMPLEMENTATION of queue using pointers****\n");
		printf("=================");
		printf("\n\t\t MENU\n");
		printf("=========");
		printf("\nt[1] to insert an element");
		printf("\nt[2] to remove an element");
		printf("\nt[3] to display all the elements");
		printf("\nt[4] Exit");
		printf("\n\n\t enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
				       printf("\n\t element to be inserted:");
				       scanf("%d",&ele);
				       add_ele(ele);
				      
				       break;
			       }
			case 2:{
				       if(!e_que())
				       {
					       j=rem_ele();
					       printf("\n\t%d is removed from queue",j);
					       
				       }
				       else
				       {
					       printf("\n\t queue is empty:");
					      
				       }
				       break;
			       }
			case 3:show_ele();
			      
			       break;
			case 4:
			       exit(1);
			       break;
			default:
			       printf("\n\t\nvalid choice:");
			      
			       break;
		}
	}
}
int e_que(void)
{
	if(f_ptr==NULL)
	return true;
	return false;
}
void add_ele(int ele)
{
	struct q_point*queue = (struct q_point*)malloc(sizeof (struct q_point));
	queue->ele=ele;
	queue->n=NULL;
	if(f_ptr==NULL)
	{
		f_ptr=queue;
	}
	else
	{
		struct q_point*ptr;
		ptr=f_ptr;
		for(ptr=f_ptr;ptr->n!=NULL;ptr=ptr->n);
		ptr->n=queue;
	}
}
int rem_ele(void)
{
	struct q_point*queue=NULL;
	if(e_que()==false)
	{
		int j=f_ptr->ele;
		queue = f_ptr;
		f_ptr=f_ptr->n;
		free(queue);
		return j;
	}
	else
	{
		printf("\n\t queue is empty");
		return-9999;
	}
}
void show_ele()
{
	struct q_point*ptr=NULL;
	ptr=f_ptr;
	if(e_que())
	{
		printf("\n\t queue is empty");
		return;
	}
	else
	{
		printf("\n\t elements present queue are:\n\t");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->ele);
			ptr=ptr->n;
		}
	}
}









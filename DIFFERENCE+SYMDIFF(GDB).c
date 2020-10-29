/* ANUBHAV MISHRA ROLL NUMBER 1908410100016 */
#include<stdio.h>
#include<stdlib.h>
typedef struct s
{
	int data;
	struct s * next;
}node;
node *set_1_head=NULL;
node *set_2_head=NULL;
void add_element_in_set(int set_number)
{
	node *temp=(node *)malloc(sizeof(node));
	printf("plz enter the element");
	scanf("%d",&(temp->data));
	temp->next=NULL;
	if(set_number==1)
	{
		if(set_1_head==NULL)
		{
			set_1_head=temp;
		}
		else
		{
			node *p=set_1_head;
			while(p->next)
			{
				if(p->data!=temp->data)
				p=p->next;
				else
				break;
			}
			if(p->data!=temp->data)
			p->next=temp;
		}
	}
	else
	{
		if(set_2_head==NULL)
		{
			set_2_head=temp;
		}
		else
		{
			node *p=set_2_head;
			while(p->next)
			{
				if(p->data!=temp->data)
				p=p->next;
				else
				break;
			}
			if(p->data!=temp->data)
			p->next=temp;
		}
	}
	
}
void create_set(int set_number)
{
	int ch;
	while(5)
	{
		printf("If you want to insert an element press 1 else press 0\n");
		scanf("%d",&ch);
		if(ch)
		add_element_in_set(set_number);
		else 
		break;
	}
}
void display_set(int set_number)
{
	if(set_number==1)
	
	{
		node *p=set_1_head;
		while(p)
		{
			printf("%d ",p->data);
			p=p->next;
		}
	}
	else
	{
		node *p=set_2_head;
		while(p)
		{
			printf("%d ",p->data);
			p=p->next;
		}
	}
}
void difference_set(node *set_1_head,node *set_2_head,int ch)
{
	
	if(ch==3)
	{
	
	node *p=set_1_head;
	while(p)
	{
		int flag=0;
		node *q=set_2_head;
		while(q)
		{
			if(q->data!=p->data)
			{
			q=q->next;
			}
			else
			{
				flag=1;
				break;
			}
	
		}
		if(flag)
		;
		else
		printf("%d ",p->data);
		p=p->next;
	}
}
	else if(ch==4)
	{
	
	node *p=set_2_head;
	while(p)
	{
		int flag=0;
		node *q=set_1_head;
		while(q)
		{
			if(q->data!=p->data)
			{
			q=q->next;
			}
			else
			{
				flag=1;
				break;
			}
	
		}
		if(flag)
		;
		else
		printf("%d ",p->data);
		p=p->next;
	}
}
else
{
	node *p=set_1_head;
	while(p)
	{
		int flag=0;
		node *q=set_2_head;
		while(q)
		{
			if(q->data!=p->data)
			{
			q=q->next;
			}
			else
			{
				flag=1;
				break;
			}
	
		}
		if(flag)
		;
		else
		printf("%d ",p->data);
		p=p->next;
}
 p=set_2_head;
	while(p)
	{
		int flag=0;
		node *q=set_1_head;
		while(q)
		{
			if(q->data!=p->data)
			{
			q=q->next;
			}
			else
			{
				flag=1;
				break;
			}
	
		}
		if(flag)
		;
		else
		printf("%d ",p->data);
		p=p->next;
}

}
}

int main()
{
	printf("create your first set \n");
	create_set(1);
	system("cls");
//	printf("this is your first set\n");
//	display_set(1);
	printf(" create your second set \n");
	create_set(2);
	system("cls");
	printf("this is your first and second set\n");
	display_set(1);
	printf("\n");
	display_set(2);
	while(5)
	{
		int ch;
			printf("1. Find differenec of the sets(A-B)(press 1 for difference of set)\n");
		printf("2. Find difference of the sets(B-A)\n");
		printf("3. Find  symmetric differennce of the sets\n");
			scanf("%d",&ch);
		switch(ch)
		{	difference_set(set_1_head,set_2_head,ch);
				printf("}");
				break;
			case 2:
				printf("difference of the two set { ");
				display_set(1);
				printf("} and { ");
				display_set(2);
				printf("} is: { ");
				difference_set(set_1_head,set_2_head,ch);
				printf("}");
				break;
			case 3:
				printf("symmetric difference of the two set { ");
				display_set(1);
				printf("} and { ");
				display_set(2);
				printf("} is: { ");
				difference_set(set_1_head,set_2_head,ch);
				printf("}");
				break;
			
	}
}
}
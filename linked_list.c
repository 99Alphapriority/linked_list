#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<time.h>
#include<stdbool.h>

int* list_p[2] = {NULL};
node_t *head = NULL;
node_t *tail = NULL;
		
/******************************************************************************
 * Function name: list_size
 * Arguments: *node_t
 * Return Type: int
 * Desc: Uses the provided pointer to count the number of nodes in a linked 
 * 	 list and returns the count
 * ***************************************************************************/

int list_size(node_t *head)
{
	int count = 0;
	while(head != NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}

/******************************************************************************
 * Function name: create_list
 * Arguments: int
 * Return Type: *node_t
 * Desc: creates a linked list of length given in the argument. Data is inserted 
 * 	 by the user during runtime
 * ***************************************************************************/

void create_list(int num_node)
{
	node_t *temp = NULL;
	int idx = 0;
	head = (node_t *)malloc(sizeof(node_t));
	printf("Enter value of node %d: ",idx);
	scanf("%d",&head->data);
	head->next = NULL;
	tail = head;

	for(idx = 1; idx<num_node; idx++)
	{
		temp = (node_t *)malloc(sizeof(node_t));
		printf("Enter value of node %d: ",idx);
		scanf("%d",&temp->data);
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}
       
	tail->next = NULL;
        list_p[0] = head;
	list_p[1] = tail;
}

/******************************************************************************
 * Function name: display
 * Arguments: *node_t
 * Retrun Type: void
 * Desc: prints the contents of a linked list 
 * ***************************************************************************/

void display(node_t *head)
{
	int idx = 0;
	while(head!=NULL)
	{
		printf("Value stored at node %d = %d\n",idx,head->data);
		head=head->next;
		idx++;
	}
}

/******************************************************************************
 * Function name: push
 * Arguments: *node_t, int
 * Return Type: *node_t
 * Desc: Adds a new node in an existing linked list
 * ***************************************************************************/

node_t *push(node_t *head, int idx, int isBack)
{
	node_t *p = NULL, *q = head, *temp = NULL;
	temp = (node_t*)malloc(sizeof(node_t));
	printf("Enter value for the node to be inserted: ");
	scanf("%d",&temp->data);
	if(isBack)
	{
		q = list_p[1];
		q->next = temp;
		list_p[1] = temp;
	}
	else if(idx == 0)
	{
		temp->next = q;
		head = temp;
	}
	else
	{
		for(int i = 0; i<idx; i++)
		{
			p=q;
			q=q->next;
		}
		temp->next = q;
		p->next = temp;
	}
	return head;

}

/******************************************************************************
 * Function name: pop
 * Arguments: *node_t, int
 * Return Type: *node_t
 * Desc: Deletes a node from the linked list
 * ***************************************************************************/

node_t *pop(node_t *head, int idx, int isBack)
{
	node_t *p = NULL, *q = NULL;

	if(isBack == 0 && idx == 0)
	{
		q = head->next;
		head->data = 0;
		head->next = NULL;
		free(head);
		head = q;
	}
	else if(isBack)
	{
		q = head;
		while(q->next)
		{
			p = q;
			q = q->next;
		}
		p->next = NULL;
		q->data = 0;
		free(q);
	}
	else
	{
		q = head;
		for(int i = 0; i<idx; i++)
		{
			p = q;
			q = q->next;
		}
		p->next = q->next;
		q->data = 0;
		q->next = NULL;
		free(q);
		
	}
	return head;

}

/******************************************************************************
 * Function name: search
 * Arguments: *node_t, int
 * Return Type: void
 * Desc: Traverse the linked list to search for a given number
 * ***************************************************************************/

void search(node_t *head, int val)
{
	int count = 0;
	while(head)
	{
		if(head->data == val)
		{
			printf("Value found at node: %d\n",count);
			return;
		}
		else
		{
			count++;
			head=head->next;
		}
	}
	if(!head)
	{
		printf("Given value not found in the list\n");
	}
}

/******************************************************************************
 * Function name: isSorted
 * Arguments: *node_t
 * Retrun Type: void
 * Desc: Traverse the linked list to check if it is sorted
 * ***************************************************************************/

void isSorted(node_t *head)
{
	node_t *p = NULL, *q = head;
	while(1)
	{
		p = q;
		q = q->next;

		if(q->data < p->data)
		{
		printf("q: %x\n",q);
			printf("Linked list is not sorted\n");
			return;
		}
		else if(q->next == NULL)
		{
		printf("q: %x\n",q);
			printf("Linked list is sorted\n");
			return;
		}
	}
}
		

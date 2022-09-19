#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<time.h>

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

node_t *push(node_t *head, int idx)
{
	node_t *p = NULL, *q = head, *temp = NULL;
	for(int i = 0; i<idx; idx++)
	{
		p=q;
		q=q->next;
	}
	temp = (node_t*)malloc(sizeof(node_t));
	printf("Enter value for the node to be inserted: ");
	scanf("%d",&temp->data);
	temp->next = q;
	if(idx == 0)
		head = temp;
	else
	{
		printf("test");
		p->next = temp;
	}
	return head;

}

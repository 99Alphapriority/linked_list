#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<time.h>

/******************************************************************************
 * Function name: create_random_list
 * Arguments: None
 * Retrun Type: *node_t
 * Desc: Creates a linked list of random length(max 100)  containing random values
 * ***************************************************************************/

node_t* create_random_list()
{
	node_t *head = NULL;
	node_t *tail = NULL;
	node_t *temp = NULL;
	int rnd_num = 0;
	srand(time(0));
	rnd_num = rand()%100+1;
	head = (node_t *)malloc(sizeof(node_t));
	head->data = rand();
	head->next = NULL;
	tail = head;

	for(int idx = 1; idx<rnd_num; idx++)
	{
		temp = (node_t *)malloc(sizeof(node_t));
		temp->data = rand();
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}
#if 0
	printf("addr of head %x\n",head);
	printf("addr of tail %x\n",tail);
#endif
	return head;
}
		
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

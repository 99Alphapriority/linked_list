#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node *next;
}node_t;

extern node_t *head;
extern node_t *tail;

//Function to create a linked list of random length
node_t* create_random_list();
//Function to calculate size of a linked list
int list_size();
//Function to create a linked list of given length
void create_list();
//Function to add a new link in the linked list
node_t* push();
//Function to display a linked list
void display();
//Function to search the list for a given value
void search();
//Function to check if the given linked list is sorted
void isSorted();
//Function to insert a value at sorted position
node_t* push_sorted();
//Function to reverse the linked list
node_t* reverse();

typedef struct node
{
	int data;
	struct node *next;
}node_t;

node_t* create_random_list();

//Function to calculate size of a linked list
int list_size();

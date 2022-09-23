#include "linked_list.h"
#include "linked_list.c"
#include "test.h"
#include "test.c"

int main()
{
	int Num_of_nodes = 0;
	printf("Enter number of nodes to create in the linked list: ");
	scanf("%d",&Num_of_nodes);
	create_list(Num_of_nodes);
	printf("All the functions will be performed on the following linked list\n");
	display(list_p[0]);
	printf("list_p[0]: %x\n",list_p[0]);
	run_all_test();
	return 0;
}

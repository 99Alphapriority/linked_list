#include<stdlib.h>
#include<time.h>

void run_all_test()
{
	test_size();
	test_push_front();
//	test_insert();
#if 0
	test_pop_front();
	test_push_back();
	test_pop_back();
	test_value_at();
	test_search();
	test_erase();
	test_reverse();
	test_insert_sorted();
	test_check_sorted();
#endif
}


void test_size()
{
	printf("\ntest_size() started\n");
	int size = 0;
	size = list_size(list_p[0]);
	printf("The randomly generated Linked list has %d nodes\n",size);
	printf("test_size() finished\n");
}


void test_push_front()
{
	printf("\ntest_push_front() started\n");
	list_p[0] = push(list_p[0],0);
	printf("List after pushing data at the head of the node\n");
	display(list_p[0]);
	printf("test_push_front() finished\n");
}
/*
void test_insert()
{
	printf("test_insert() started\n");
	node_t *head_p = NULL;
	int num_node = 0, idx = 0;
	printf("Enter number of nodes to create\t");
	scanf("%d",&num_node);
	head_p = create_list(num_node);
	printf("List before inserting a new node\n");
	display(head_p);
	printf("Enter index to insert a new node at: ");
	scanf("%d", &idx);
	printf("idx %d\n",idx);
	head_p = push(head_p,3);
	printf("List after a new node at index %d\n",idx);
	display(head_p);
	printf("test_insert() finished\n");
}
*/

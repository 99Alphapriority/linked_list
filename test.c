#include<stdlib.h>
#include<time.h>

void run_all_test()
{
	test_size();
	test_push_front();
	test_insert();
	test_push_back();
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
	printf("The user created Linked list has %d nodes\n",size);
	printf("test_size() finished\n");
}


void test_push_front()
{
	printf("\ntest_push_front() started\n");
	list_p[0] = push(list_p[0],0,0);
	printf("List after pushing data at the head of the list\n");
	display(list_p[0]);
	printf("test_push_front() finished\n");
}

void test_insert()
{
	printf("\ntest_insert() started\n");
	int idx = 0;
	printf("Enter index to insert a new node at: ");
	scanf("%d", &idx);
	list_p[0] = push(list_p[0],idx,0);
	printf("List after a new node at index %d\n",idx);
	display(list_p[0]);
	printf("test_insert() finished\n");
}

void test_push_back()
{
	printf("\ntest_push_back() started\n");
	list_p[0] = push(list_p[0],0,1);
	printf("List after pushing data at the end of the list\n");
	display(list_p[0]);
	printf("test_push_back() finished\n");
}
	

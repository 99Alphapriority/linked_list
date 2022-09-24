#include<stdlib.h>

void run_all_test()
{
#if 1
	test_size();
	test_push_front();
	test_insert();
	test_push_back();
	test_pop_front();
	test_pop_back();
	test_erase();
	test_search();
	test_check_sorted();
	test_insert_sorted();
	test_reverse();
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
	
void test_pop_front()
{
	printf("\ntest_pop_front() started\n");
	list_p[0] = pop(list_p[0],0,0);
	printf("List after popping data from the head of the list\n");
	display(list_p[0]);
	printf("test_pop_front() finished\n");
}

void test_pop_back()
{
	printf("\ntest_pop_back() started\n");
	list_p[0] = pop(list_p[0],0,1);
	printf("List after popping data from the tail of the list\n");
	display(list_p[0]);
	printf("test_pop_back() finished\n");
}

void test_erase()
{
	int idx;
	printf("\ntest_erase() started\n");
	printf("Enter node index to delete: ");
	scanf("%d", &idx);
	list_p[0] = pop(list_p[0],idx,0);
	printf("List after deleting the given node\n");
	display(list_p[0]);
	printf("test_erase() finished\n");
}

void test_search()
{
	int val;
	printf("\ntest_search() started\n");
	printf("Enter value to search: ");
	scanf("%d",&val);
	search(list_p[0],val);
	printf("test_search() finished\n");
}

void test_check_sorted()
{
	printf("\ntest_check_sorted() started\n");
	isSorted(list_p[0]);
	printf("test_check_sorted() finished\n");
}

void test_insert_sorted()
{
	int num = 0;
	printf("\ntest_insert_sorted() started\n");
	printf("Enter value to be inserted into the linked list: ");
	scanf("%d",&num);
	list_p[0] = push_sorted(list_p[0], num);
	printf("Linked list after inserting value at sorted position\n");
	display(list_p[0]);
	printf("test_insert_sorted() finished\n");
}

void test_reverse()
{
	printf("\ntest_reverse() started\n");
	list_p[0] = reverse(list_p[0]);
	printf("List after reversing the nodes\n");
	display(list_p[0]);
	printf("test_reverse() finished\n");
}

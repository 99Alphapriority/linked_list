#include<stdlib.h>
#include<time.h>

void run_all_test()
{
	test_size();
#if 0
	test_push_front();
	test_pop_front();
	test_push_back();
	test_pop_back();
	test_value_at();
	test_search();
	test_insert();
	test_erase();
	test_reverse();
	test_insert_sorted();
	test_check_sorted();
#endif
}


void test_size()
{
	printf("test_size() started\n");
	int size = 0;
	size = list_size(create_random_list());
	printf("The randomly generated Linked list has %d nodes\n",size);
	printf("test_size() finished\n");
}

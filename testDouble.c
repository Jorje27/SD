#include<stdio.h>
#include <assert.h>

typedef int T;
#include "double_linked_list.h"
	
void test_insert(List **L)
{
	int i;
	
	for (i=0;i<10; i++)	
		insertAt(L,1,i);	
		
	for (i=0;i<10; i++)	
		insertAt(L,1,i);
	for (i=0; i<10; i++)
		insertAt(L,i+11,i+10);
	printf("After insert:\n");
	printList(*L);
	printReversed(*L);
}

void test_delete(List **L)
{
	int i;
	for (i=0; i<20; i++)
		deleteOnce(L,i);
	printf("After delete:\n");
	printList(*L);
	printReversed(*L);
}
void test_len(List **L)
{
	int i;
	for (i=0; i<1000;i++)	
		insertAt(L,1,i);
	printf ("The length is (should be 1010): %d\n", length(*L));
}

void test_contains(List **L)
{
	int i;
	printf ("Test contains (should be 1 1 0 0): ");
	for (i=990; i<1010; i+=5)
		printf ("%d ", contains(*L,i));
	printf("\n");
}

void test_free(List **L)
{
	freeList(L);
	printf ("The list should be empty now ");
	if (isEmpty(*L))
		printf ("and it is.\n");
	else
		printf("but it isn't\n");
}
int main()
{
	List * L;
	init(&L);
	test_insert(&L);
	test_delete(&L);
	test_len(&L);
	test_contains(&L);
	test_free(&L);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>

#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H
typedef struct ListNode {
    struct ListNode *next;
    struct ListNode *prev;
    T value;
} ListNode;

typedef struct List {
    ListNode *first;
    ListNode *last;
} List;

void init (List ** L)
{
	*L=NULL;
}
void insertAt(List ** L, int poz, T elem)
{
	ListNode* nod=(ListNode*)malloc(sizeof(ListNode));
	nod->prev=NULL;
	nod->next=NULL;
	nod->value=elem;	
	if(isEmpty(*L)) {
				(*L)->first=nod; 
				(*L)->last=nod;
			}
        else if(poz==1) { 
				printf("%c\n",elem);				
				nod->next=(*L)->first; (*L)->first->prev=nod; (*L)->first=nod; }
	     else
		{	     	
			ListNode* aux=(*L)->first;
			int i=0;		
			for(i=0;i<poz-1;i++) aux=aux->next; 
			nod->next=aux; 
			nod->prev=aux->prev; 
			aux->prev->next=nod; 
		}
}
int isEmpty(List *L)
{
	if(L==NULL) return 1;	
	return 0;
}

int contains(List *L, T elem)
{
	return 0;
}

void freeList(List **L)
{

}


int length(List *L)
{
	return 0;
}

void printList(List *L)
{

}
	
void printReversed(List *L)
{

}

void deleteOnce(List **L, T elem)
{	

}


#endif

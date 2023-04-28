#ifndef LISTES_H
#define LISTE_H
#include<string>
#include<stdio.h>
#include<stdlib.h>
/**
 * struct node - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */

typedef struct Node 
{
	char *str;
	unsigned int len;
	struct Node* next;
} node;

size_t print_list(const list_t *h);
#endif

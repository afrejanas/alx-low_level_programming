#ifndef LISTES_H
#define LISTE_H

#include<stdio.h>
#include<stdlib.h>


typedef struct Node 
{
    int data;
    struct Node* next;
}node;

size_t print_list(const list_t *h);
#endif

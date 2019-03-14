#include <stdbool.h>
#include <stdio.h>


#ifndef BINARYTREE_BINARYTREE_H
#define BINARYTREE_BINARYTREE_H

typedef struct Binary_Tree{

    int size;
	struct Binary_Tree root;

}binary_tree;

typedef struct Tree_Node {
    int item;
    struct Tree_Node nextNodePtr;
    struct Tree_Node nextNodeLeft;
    struct Tree_Node nextNodeRight;

}Node;



void initialize(binary_tree* bt);
bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, int key);
void printinorder(binary_tree* bt);
void printpreorder(binary_tree* bt);
void printpostorder(binary_tree* bt);
int btsize(binary_tree* bt);
int treeheight(binary_tree* bt);

#endif //BINARYTREE_BINARYTREE_H

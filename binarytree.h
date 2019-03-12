#include <stdbool.h>
#include <stdio.h>


#ifndef BINARYTREE_BINARYTREE_H
#define BINARYTREE_BINARYTREE_H

typedef struct Binary_Tree{

    int item;
    

}binary_tree;



void initialize(binary_tree* bt);
bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, int item);
void printinorder(binary_tree* bt);
void printpreorder(binary_tree* bt);
void printpostorder(binary_tree* bt);
int btsize(binary_tree* bt);
int treeheight(binary_tree* bt);

#endif //BINARYTREE_BINARYTREE_H

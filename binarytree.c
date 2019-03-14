#include "binarytree.h"
#include <stdio.h>
#include <stdlib.h>

//recursively prints in order 
void printInOrder(Node* node) {
     if(node == NULL) {
         return;
     }

     printInOrder(node->nextNodeLeft);

     printInOrder(node->nextNodeRight);

     
}

void initialize(binary_tree* bt) {
    bt->root = NULL;
    bt->size = 0;
}

bool search(binary_tree* bt, int key) {
     Node* current = bt->root;

     while(current != NULL) {
         
         //returns true if key is found
         if(key == current->key) {
             return true;
         }
         //goes left on tree if key is smaller than current nodes key
         else if(key < current->key) {
             current = current->nextNodeLeft;
         }
         //goes right if key is bigger than current nodes key
         else {
             current = current->nextNodeRight;
         }
     }

     //returns false if key is not found
     return false;
}

void insert(binary_tree* bt, int key) {
    Node* new = (Node*)malloc(sizeof(Node));
    new->key = key;
    new->nextNodeLeft = NULL;
    new->nextNodeRight = NULL;

    //if tree is empty
    if(bt->root == NULL) {
        bt->root = new;
    }
    //if tree contains nodes
    else {
       Node* current = bt->root;
       //previous will be the parent node after loop is completed
       Node* previous;
       
       //loops until it reaches place of insertion
       while(current != NULL) {
           //checks if key goes left of current node
           if(key < current->key) {
               previous = current;
               current = current->nextNodeLeft;
           }
           //checks if key goes right of current node
           else if(key > current->key) {
               previous = current;
               current = current->nextNodeRight;
           }
       }
       //deals with the case of the root being the only node in the tree
       if (current == bt->root) {
           if(key < bt->root->key) {
               current = bt->root->nextNodeLeft; 
           }
           else if(key > bt->root->key) {
               current = bt->root->nextNodeRight;
           }
       }
       
       //adds the new node to the right or left of parent node
       if (key < previous->key) {
		    previous->nextNodeLeft = new;
       }
	    else{
       else{
		    previous->nextNodeRight = new;
        }
    }
    bt->size++;
}

void printinorder(binary_tree* bt) {
    printInOrder(bt->root);
}




int btSize(binary_tree* bt) {
    return bt->size;
}

<<<<<<< HEAD

=======
void printnodesinorder(node* pnode){
    if(pnode ==NULL){
        return;
    }
    printnodesinorder(pnode.left);
}

void printinorder(binary_tree* bt){
    printnodesinorder(bt->root);
}
>>>>>>> f3452c9c8258f9c7a4bf36da5eb1f275191f3747

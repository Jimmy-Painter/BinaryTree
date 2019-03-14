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
<<<<<<< HEAD
               current = bt->root->nextNodeLeft;
=======
               current = bt->root->nextNodeLeft; 
>>>>>>> e04ba4bcfe80d0f4b3c517f9d83e12c54ac3af05
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
		    previous->nextNodeRight = new;
        }
    }
    bt->size++;
}

<<<<<<< HEAD
<<<<<<< HEAD
void printpostorder(binarytree* bt) {
  if(bt->root = NULL){
    return;
  }
  printpostorder((bt->root)->nextNodeLeft);
  printpostorder((bt->root)->nextNodeRight);
  printf("%d ", bt->num);
}
=======
void printinorder(binary_tree* bt) {
    printInOrder(bt->root);
}


>>>>>>> e04ba4bcfe80d0f4b3c517f9d83e12c54ac3af05

void printpreorder(binarytree* bt) {
  if(bt->root = NULL){
    return;
  }
  printf("%d ", bt->num);
  printpreorder((bt->root)->nextNodeLeft);
  printpreorder((bt->root)->nextNodeRight);
}

int treeheight(binarytree* bt){
  if(bt->root = NULL) {
    return;
  }

    int leftDepth = treeheight((bt->root)->nextNodeLeft);
    int rightDpeth = treeheight((bt->root)->nextNodeRight);

    if(leftDepth > rightDepth) {
      return leftDepth + 1;
    }

    else {
      return rightDepth + 1;
    }

}

<<<<<<< HEAD
int btsize(binarytree* bt){
    return bt->size;
  }




}
=======
<<<<<<< HEAD
<<<<<<< HEAD

>>>>>>> e04ba4bcfe80d0f4b3c517f9d83e12c54ac3af05
=======
void printnodesinorder(node* pnode){
=======
void printnodesinorder(Node* pnode){
>>>>>>> 6c67e34e8de4fb46b9a10345cf6d410876c11dd8
    if(pnode ==NULL){
        return;
    }
    printnodesinorder(pnode->nextNodeLeft);
}

void printinorder(binary_tree* bt){
    printnodesinorder(bt->root);
}
<<<<<<< HEAD
>>>>>>> 02dbf396c070e0d35e247fb0cf3af5b156d10aae
=======
>>>>>>> f3452c9c8258f9c7a4bf36da5eb1f275191f3747
>>>>>>> e04ba4bcfe80d0f4b3c517f9d83e12c54ac3af05

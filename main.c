#include <stdio.h>
#include "binarytree.h"

int main(int argc, char* argv[]) {
   
   //gives error and returns 1 if # command line arguments is wrong 
    if(argc != 2) {
        printf("Too many arguments\n");
        return 1;
    }

    FILE* numbers = fopen(argv[1], "r");
    binary_tree bt;
    bool found;
    int numRead;

    //error if file can't be opened
    if(numbers == NULL) {
        printf("File could not be opened\n");
        return 1;
    }

    initialize(&bt);

    //read content of files and insert into bt
    while (!feof(numbers)){
        fscanf(numbers, " %d", &numRead);
        insert(&bt, numRead); 
    }

    printf("Print in order\n");
    printinorder(&bt);
    printf("\nPrint pre order\n");
    printpreorder(&bt);
    printf("\nPrint post order\n");
    printpostorder(&bt);
    printf("\n");
    found = search(&bt,33);
    if (found){
        printf("FOUND 33\n");
    }
    found = search(&bt,38);
    if (found){
        printf("FOUND 38\n");
    }
    printf("Number of elements in tree: %d\n", btsize(&bt));
    printf("Tree height: %d\n", treeheight(&bt));

   return 0;

    
}

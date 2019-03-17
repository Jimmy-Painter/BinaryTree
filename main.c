#include <stdio.h>
#include "binarytree.h"

int main() {

    FILE* numbers = fopen("C:\\Users\\Jimmy\\Documents\\GitHub\\BinaryTree\\myfile.txt", "r");
    binary_tree bt;
    int found;
    int const ARR_SIZE = 10;
    int nums[ARR_SIZE ];
    int i;
    int numRead;

    while (!feof(numbers)){
        fscanf(numbers, "%d", &numRead);
        printf("%d\n", numRead);
        insert(&bt, numRead); 
    }

    initialize(&bt);


    printf("Print in order\n");
    printinorder(&bt);
    printf("\nPrint pre order\n");
//    printpreorder(&bt);
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



    printf("Print in order\n");
    printinorder(&bt);
    printf("\nPrint pre order\n");
//    printpreorder(&bt);
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

#include <stdio.h>

int main() {
    int n, i, count, pos, flag;


    // setting number of elements to be read
    printf(" Enter Number Of Elements: ");
    scanf("%d", &n);
    int a[n];
    printf("\n Enterd number of elements: %d", n);

    // reading the elements
    printf("\n Enter Elements to be read: \n");
    for(i=0;i<n;i++){
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    return 0;
}
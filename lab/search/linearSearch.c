#include <stdio.h>

int main() {
    int n, i, item, flag, pos;


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

    // display the elements
    printf("\n Elements u enterd: \n");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }

    // element to search
    printf("\n Enter the element to be searched: ");
    scanf("%d", &item);
    
    // let the search beginnn
    for(i=0;i<n;i++){
        if (a[i]==item){
            flag = 1;
            pos = i+1;
            break;
        }
    }

    return 0;
}
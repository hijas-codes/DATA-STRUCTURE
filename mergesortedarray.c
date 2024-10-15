#include <stdio.h>
int main() {
    int i, j, k, x, y, temp;
    printf("Enter the size of the first array: ");
    scanf("%d", &y);
    printf("Enter the items for the first array:\n");
    int a[y];
    for (i = 0; i < y; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &x);
    int b[x];
    printf("Enter the items for the second array:\n");
    for (i = 0; i < x; i++) {
        scanf("%d", &b[i]);
    }

    printf("\nBefore sorting first array:\n");
    for(i=0;i<y;i++) {
        printf("%d  ",a[i]);
    }

    printf("\nBefore sorting  second array:\n");
    for(i=0;i<x;i++) {
        printf("%d  ",b[i]);
    }

    // Sort the first array
    for (i = 0; i < y; i++) {
        for (j = i + 1; j < y; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Sort the second array
    for (i = 0; i < x; i++) {
        for (j = i + 1; j < x; j++) {
            if (b[i] > b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    // Merge the two arrays
    k = 0;
    i = j = 0;
    int p;
    p=x+y;
    int c[p];
    while (i < y && j < x) {
        if (a[i] > b[j]) {
            c[k++] = b[j++];
        } else {
            c[k++] = a[i++];
        }
    }
    while (i < y) {
        c[k++] = a[i++];
    }
    while (j < x) {
        c[k++] = b[j++];
    }

    // Print the results
    printf("\nResult after sorting first array: \n");
    for (i = 0; i < y; i++) {
        printf("%d  ", a[i]);
    }

    printf("\nResult after sorting second array: \n");
    for (i = 0; i < x; i++) {
        printf("%d  ", b[i]);
    }

    printf("\nAfter merging first and second array: \n");
    for (i = 0; i < k; i++) {
        printf("%d  ", c[i]);
    }
    printf("\n");

    return 0;
}

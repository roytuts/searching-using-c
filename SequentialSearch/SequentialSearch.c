/* 
 * File:   SequentialSearch.c
 * Author: https://roytuts.com
 */

#include <stdio.h>
#include <stdlib.h>

int sequentialSearch(int k, int a[], int n) {
    int i = 0;
    while (i < n) {
        if (k == a[i]) {
            break;
        } else {
            i++;
        }
    }
    if (i < n) {
        return i;
    } else {
        return -1;
    }
}

int main() {
    int choice, value;
    int a[] = {1, 8, 6, 9, 4, 5, 6};
    printf("\n:: Sequential Search ::\n");
    while (1) {
        printf("\nChoose from below Menu\n");
        printf("1. Search\n2. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Enter the value to be searched: ");
                scanf("%d", &value);
                int index = sequentialSearch(value, a, 7);
                if (index > 0) {
                    printf("\nValue found at index %d in the array\n", index);
                } else {
                    printf("\nValue not found in the array\n");
                }
                break;
            case 2: exit(0);
            default: printf("\nWrong selection!!! Please try again!!!\n");
        }
    }
}
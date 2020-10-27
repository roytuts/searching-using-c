/* 
 * File:   BinarySearch.c
 * Author: https://www.roytuts.com
 */

#include <stdio.h>
#include <stdlib.h>

int binarySearch(int k, int a[], int n) {
    int i = -1;
    int lower = 0, mid;
    int upper;
    upper = n - 1;
    while (upper >= lower) {
        mid = (upper + lower) / 2;
        if (k == a[mid]) {
            i = mid;
            break;
        } else {
            if (k > a[mid]) {
                lower = mid + 1;
            } else {
                upper = mid - 1;
            }
        }
    }
    return i;
}

int main() {
    int choice, value;
    int a[] = {10, 25, 48, 69, 94, 105, 116};
    printf("\n:: Binary Search ::\n");
    while (1) {
        printf("\nChoose from below Menu\n");
        printf("1. Search\n2. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Enter the value to be searched: ");
                scanf("%d", &value);
                int index = binarySearch(value, a, 7);
                if (index >= 0) {
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
#include<stdio.h>

int search(int *a, int n, int k){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==k){
			return i;
		}
	}
	return -1;
}

main(){
	int i;
	int a[50];
	int searchIndex;
	for(i=0;i<50;i++){
		a[i]=i+100;
	}
	searchIndex = search(a,50,135);
	if(searchIndex != -1){
		printf("Search found at array index %d", searchIndex);
	}else{
		printf("Element not found in array");
	}
	return 0;
}

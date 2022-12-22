#include "header.h"

int main(){
	int n;
	printf("Enter the length of array: ");
	scanf("%d", &n);
	int arr[n];
	for (int i=1; i<=n;i++){
		printf("Enter the element: ");
		scanf("%d", &arr[i-1]);
	}
	int x;
	printf("Enter the element to be searched: ");
	scanf("%d", &x);
	int i =  linearSearch(n , arr, x);
	if (i!=-1) printf("Element found at position: %d\n",i);
	else printf("Element not found\n");
	return 0;
}
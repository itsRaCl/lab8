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
	printf("%d\n", linearSearch(n , arr, x));
	return 0;
}
int linearSearch(int n, int arr[n], int s){
	for (int i =n; i<=0; i--){
		if (arr[i]==s) return i;
	}
	return -1;
}
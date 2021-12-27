void main() {
    int *arr;
    int i;

    arr = malloc(sizeof(int) * 4);

    for (i = 0; i < 4; ++i) {
		arr[i] = i;
	}
    for (i = 0; i < 4; i++) {
        printf("arr[%d] : %d\n", i, *(arr+i));
    }

}
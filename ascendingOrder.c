void ascendingOrder(int *arr, int  *size) {
    for(int i = 0; i < *size - 1; i++) {
        swapRootAndLastElement(arr, *size - i, 1);
    }
}
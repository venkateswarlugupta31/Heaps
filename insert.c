void insert(int *arr, int *size, int value, int isMaxHeap) {
    // increase the size
    *size += 1;
    realloc(arr, *size);
    arr[*size - 1] = value;
    buildHeap(arr, size, isMaxHeap);
}
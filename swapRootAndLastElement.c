void swapRootAndLastElement(int *arr, int noOfHeapElements, int isMaxHeap) {
    int lastIndex = noOfHeapElements - 1;
    swap(arr, 0, lastIndex);
    buildHeap(arr, &lastIndex, isMaxHeap);
}
void buildHeap(int *arr, int *size, int isMaxHeap) {
    if(isMaxHeap == 1) {
        for(int i = *size - 1; i >= 0; i--) {
            maxHeapify(arr, i);
        }
    } else {
        for(int i = *size - 1; i >= 0; i--) {
            minHeapify(arr, i);
        }
    }
}
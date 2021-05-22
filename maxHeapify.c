void maxHeapify(int *arr, int pos) {
    while(pos > 0) {
        int parent = (pos - 1) / 2;
        if(arr[parent] < arr[pos]) {
            swap(arr, parent, pos);
        } 
        pos = parent;
    }
}
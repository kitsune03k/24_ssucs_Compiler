void bubblesort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

int main() {
    int nicearray[6] = {10, 9, 8, 7, 6, 5};
    
    bubblesort(nicearray, sizeof(nicearray)/sizeof(int));
    
    return 0;
}
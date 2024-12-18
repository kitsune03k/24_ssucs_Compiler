void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[7], n;
    
    arr[0]=  64;
    arr[1] = 34;
    arr[2] = 90;
    arr[3] = 12;
    arr[4] = 22;
    arr[5] = 11;
    arr[6] = 25;
    
    n = sizeof(arr)/sizeof(int);
    
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
    
    return 0;
}

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    int swapped;

    do {
        swapped = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                // arr[i] ve arr[i + 1] birleþtirme
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
int i;
    printf("Orijinal dizi:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\nKabarcýk Sýralamasý kullanýlarak sýralanmýþ dizi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

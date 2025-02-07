#include <stdio.h>

void Merge(int a[], int low, int mid, int high);
void MergeSort(int a[], int low, int high);

int main() {
    int size, i;
    
    printf("Enter size: ");
    scanf("%d", &size);
    
    int a[size]; 
    
    printf("Enter elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
    MergeSort(a, 0, size - 1); 
    
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}


void MergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        
        MergeSort(a, low, mid);       
        MergeSort(a, mid + 1, high);   
        Merge(a, low, mid, high);      
    }
}


void Merge(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    int b[high + 1]; 

    while (i <= mid && j <= high) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    // If left subarray is exhausted, copy remaining elements from right subarray
    if (i > mid) {
        while (j <= high) {
            b[k] = a[j];
            j++;
            k++;
        }
    } 
    
    else {
        while (i <= mid) {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    
    for (i = low; i <= high; i++) {
        a[i] = b[i];
    }
}


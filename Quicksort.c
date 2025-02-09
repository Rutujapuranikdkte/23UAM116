#include <stdio.h>

void quicksort(int a[], int i, int j);
int partition(int a[], int i, int j);

int main() {
    int i = 0, size;
    
    printf("Enter size: ");
    scanf("%d", &size);
    
    int a[size];
    
    printf("Enter elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
    quicksort(a, 0, size - 1);
    
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}

void quicksort(int a[], int i, int j) {
    if (i < j) {
        int loc = partition(a, i, j);
        quicksort(a, i, loc - 1);
        quicksort(a, loc + 1, j);
    }
}

int partition(int a[], int i, int j) {
    int pivot = a[i];  
    int left = i, right = j;
    int temp;
    
    while (left < right) {
        while (i < j && a[left] <= pivot) {
            left++; 
        }
        while (a[right] > pivot) {
            right--;  // Move right pointer backward
        }
        if (left < right) {
            
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
    }
    
    
    temp = a[i];
    a[i] = a[right];
    a[right] = temp;
    
    return right;  
}


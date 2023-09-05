#include <iostream>

void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n) {
    // Build max heap (rearrange array)
    if (n <= 1) {
        return;
    }
    for (int i = 1; i < n; i++) {
        int childIndex = i;
        int parentIndex = (childIndex - 1) / 2;
        while (childIndex > 0) {
            if (arr[parentIndex] < arr[childIndex]) {
                std::swap(arr[childIndex], arr[parentIndex]);
            } else {
                break;
            }
            childIndex = parentIndex;
            parentIndex = (childIndex - 1) / 2;
        }
    }

    // Heap Sort (extract elements one by one)
    int size = n;
    while (size > 1) {
        std::swap(arr[0], arr[size - 1]);
        size--;

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < size) {
            int largestIndex = parentIndex;
            if (arr[largestIndex] < arr[leftChildIndex]) {
                largestIndex = leftChildIndex;
            }
            if (rightChildIndex < size && arr[rightChildIndex] > arr[largestIndex]) {
                largestIndex = rightChildIndex;
            }
            if (largestIndex == parentIndex) {
                break;
            }
            std::swap(arr[parentIndex], arr[largestIndex]);
            parentIndex = largestIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
    }
}


int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

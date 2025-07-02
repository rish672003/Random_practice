#include<bits/stdc++.h>

using namespace std;


// now i am doing with this quick sort algorithm

int quicksort(int arr[], int k ) {

    int n = sizeof(arr) / sizeof(arr[0]);
    if (n <= 0 || k <= 0 || k > n) {
        return -1; // Invalid input
    }

    // Partitioning the array
    int pivot = arr[n - 1];
    int i = -1;

    for (int j = 0; j < n - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[n - 1]);
    
    int partitionIndex = i + 1;

    // If the partition index is the k-th smallest element
    if (partitionIndex == k - 1) {
        return arr[partitionIndex];
    } else if (partitionIndex > k - 1) {
        return quicksort(arr, k); // Search in the left part
    } else {
        return quicksort(arr + partitionIndex + 1, k - partitionIndex - 1); // Search in the right part
    }
    
}


int kthElement(int arr[], int n, int k) {
    return quicksort(arr, k);
}



int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the value of k: ";
    cin >> k;
    
    if (k < 1 || k > n) {
        cout << "Invalid value of k." << endl;
        return 0;
    }
    
    int result = kthElement(arr, n, k);
    cout << "The " << k << "-th smallest element is: " << result << endl;
    
    return 0;
}
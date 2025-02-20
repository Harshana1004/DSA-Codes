#include <iostream>
#include <vector>
using namespace std;

void optimizedBubbleSort(vector<int>& arr) {
    bool swapped;  // Flag to check if any swapping occurred
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        swapped = false; // Reset the flag for each pass
        // Last i elements are already sorted, so no need to check them
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                swap(arr[j], arr[j + 1]);
                swapped = true; // Indicate that a swap occurred
            }
        }
        
        // If no two elements were swapped by inner loop, then the array is already sorted
        if (!swapped) {
            break; // Exit the loop early
        }
    }
}

void printVector(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Unsorted vector: ";
    printVector(arr);
    
    optimizedBubbleSort(arr);
    
    cout << "Sorted vector: ";
    printVector(arr);
    
    return 0;
}

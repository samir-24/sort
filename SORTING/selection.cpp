#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Size of Array";
    cin >> n;   

    int *arr = new int[n];

    cout << "Enter Numbers : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; 

    return 0;
}



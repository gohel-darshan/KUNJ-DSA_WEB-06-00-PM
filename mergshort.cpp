#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;//1,2,3,4  |  1,2 |  3,4  |  //left
    int n2 = right - mid; // right

    int L[n1], R[n2];// left & right

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];//1 + 2 + 3 + 4 
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];//1 / 2 /3 /4 

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

int main() {
    int size;

    cout << "Enter number of elements in array: ";
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> box[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << box[i] << " ";
    }
    cout << endl;

    mergeSort(box, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << box[i] << " ";
    }
    cout << endl;
}
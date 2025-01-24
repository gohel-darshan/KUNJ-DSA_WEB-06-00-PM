// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the array's size: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter array's elements:\n";
//     for (int i = 0; i < size; i++) {
//         cout << "a[" << i << "] = ";
//         cin >> arr[i];
//     }

//     cout << "Negative elements from an Array: ";
//     for (int i = 0; i < size; i++) {
//         if (arr[i] < 0) {
//             cout << arr[i] << " ";
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int rows, cols;

//     cout << "Enter the array's row size: ";
//     cin >> rows;
//     cout << "Enter the array's column size: ";
//     cin >> cols;

//     int arr[rows][cols];

//     cout << "Enter array's elements:\n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "a[" << i << "][" << j << "] = ";
//             cin >> arr[i][j];
//         }
//     }
//     int largest = arr[0][0];
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if (arr[i][j] > largest) {
//                 largest = arr[i][j];
//             }
//         }
//     }
//     cout << "The largest element is: " << largest << endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter the array's row & column size: ";
//     cin >> n;

//     int arr[n][n];
//     int transpose[n][n];
   
//     cout << "Enter array's elements:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "a[" << i << "][" << j << "] = ";
//             cin >> arr[i][j];
//         }
//     }
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             transpose[j][i] = arr[i][j];
//         }
//     }

//     cout << "The transpose matrix of an array:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
 
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int rowNum;
    cout << "Enter row number: ";
    cin >> rowNum;

    int rowSum = 0;
    cout << "Elements of row " << rowNum << ": ";
    for (int j = 0; j < cols; j++) {
        cout << arr[rowNum][j] << " ";
        rowSum += arr[rowNum][j];
    }
    cout << "\nThe sum of row " << rowNum << ": " << rowSum << endl;

    int colNum;
    cout << "Enter column number: ";
    cin >> colNum;

    int colSum = 0;
    cout << "Elements of column " << colNum << ": ";
    for (int i = 0; i < rows; i++) {
        cout << arr[i][colNum] << " ";
        colSum += arr[i][colNum];
    }
    cout << "\nThe sum of column " << colNum << ": " << colSum << endl;
}


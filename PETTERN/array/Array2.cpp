#include <iostream>
using namespace std;

int main() {
    int arr[100]; // Fixed size array (you can modify the size as needed)
    int n = 0; // Current number of elements in the array
    int capacity = 100; // Maximum capacity of the array
    int choice, pos, value, i;

    while (true) {
        // Menu Display
        cout << "\nMenu:\n";
        cout << "1. Create (Insert an element)\n";
        cout << "2. Read (Display all elements)\n";
        cout << "3. Update (Update an element)\n";
        cout << "4. Delete (Delete an element)\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            // Exit the program
            cout << "Exiting the program..." << endl;
            break;
        }

        switch(choice) {
            case 1: // Create operation (Insert an element)
                if (n == capacity) {
                    cout << "Array is full.\n";
                    break;
                }

                cout << "Enter the value to insert: ";
                cin >> value;
                arr[n] = value;
                n++;
                cout << "Element inserted successfully.\n";
                break;

            case 2: // Read operation (Display all elements)
                if (n == 0) {
                    cout << "Array is empty.\n";
                } else {
                    cout << "Array elements: ";
                    for (i = 0; i < n; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3: // Update operation (Update an element)
                cout << "Enter position to update (1 to " << n << "): ";
                cin >> pos;
                if (pos >= 1 && pos <= n) {
                    cout << "Enter new value: ";
                    cin >> value;
                    arr[pos - 1] = value;
                    cout << "Element updated successfully.\n";
                } else {
                    cout << "Invalid position.\n";
                }
                break;

            case 4: // Delete operation (Delete an element)
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;
                if (pos >= 1 && pos <= n) {
                    // Shift elements to the left to fill the gap
                    for (i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted successfully.\n";
                } else {
                    cout << "Invalid position.\n";
                }
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

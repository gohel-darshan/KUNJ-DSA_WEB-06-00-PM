#include <iostream>
using namespace std;

int main()
{
    int user, size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size]; 

    
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] = ";
        cin >> array[i];
    }

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Update Value at Index\n";
        cout << "4. Delete Value at Index\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> user;

        switch (user)
        {
        case 1:
            
            cout << "Enter the new size of the array: ";
            cin >> size;

            cout << "Enter new array elements:\n";
            for (int i = 0; i < size; i++)
            {
                cout << "Array[" << i << "] = ";
                cin >> array[i];
            }
            cout << "Array created successfully.\n";
            break;

        case 2:
        
            cout << "Array elements are: ";
            for (int i = 0; i < size; i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
            break;

        case 3:
            
            int index, value;
            cout << "Enter the index to update (0 to " << size - 1 << "): ";
            cin >> index;

            if (index >= 0 && index < size)
            {
                cout << "Enter new value: ";
                cin >> value;
                array[index] = value;
                cout << "Value updated successfully.\n";
            }
            else
            {
                cout << "Invalid index.\n";
            }
            break;

        case 4:
            
            int indexDelete;
            cout << "Enter the index to delete (0 to " << size - 1 << "): ";
            cin >> indexDelete;

            if (indexDelete >= 0 && indexDelete < size)
            {
                for (int i = indexDelete; i < size - 1; i++)
                {
                    array[i] = array[i + 1];
                }
                size--; 
                cout << "Value deleted successfully.\n";
            }
            else
            {
                cout << "Invalid index.\n";
            }
            break;

        case 0:
            
            cout << "Exiting program. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (user != 0);

    return 0;
}
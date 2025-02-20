#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void create(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
  
    void read() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void update(int oldValue, int newValue) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == oldValue) {
                temp->data = newValue;
                cout << "Updated value " << oldValue << " to " << newValue << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Value " << oldValue << " not found in the list." << endl;
    }

    void deleteNode(int value) {
        Node* temp = head;
        Node* prev = nullptr;

        if (temp != nullptr && temp->data == value) {
            head = temp->next;
            delete temp;
            cout << "Deleted value " << value << endl;
            return;
        }
        
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Value " << value << " not found in the list." << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Deleted value " << value << endl;
    }
};

int main() {
    LinkedList list;
    int choice, data, oldValue, newValue;

    do {
        cout << "\nLinked List Operations:" << endl;
        cout << "1. Add Node" << endl;
        cout << "2. Display List" << endl;
        cout << "3. Update Node" << endl;
        cout << "4. Delete Node" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to add: ";
                cin >> data;
                list.create(data);
                break;
            case 2:
                cout << "The linked list is: ";
                list.read();
                break;
            case 3:
                cout << "Enter the value to update: ";
                cin >> oldValue;
                cout << "Enter the new value: ";
                cin >> newValue;
                list.update(oldValue, newValue);
                break;
            case 4:
                cout << "Enter the value to delete: ";
                cin >> data;
                list.deleteNode(data);
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
}

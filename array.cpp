#include<iostream>
using namespace std;

class user{
    public:
    
    int value;

    struct node
    {
        int data;
        node *next;
    };

    void create()
    {
        
    }

    void read()
    {
        cout <<"hello 2";
    }

    void insert(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted: " << value << endl;
    }

    void remove()
    {
        cout <<"hello 4";
    }
};

int main(){
    int choice;
    user s1;

    do
    {
        cout << "1.crate" << endl;
        cout << "2.read" << endl;
        cout << "3.insert" << endl;
        cout << "4.delete" << endl;
        cout << "0.exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            s1.create();
            break;
        
        case 2:
            s1.read();
            break;

         case 3:
            s1.insert();
            break;

         case 4:
            s1.remove();
            break;

        case 0:
            cout << "invalid choice " << endl;
        }

    } while (choice != 0);
    

}
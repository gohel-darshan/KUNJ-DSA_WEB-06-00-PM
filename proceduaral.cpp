#include <iostream>
using namespace std;

class Student {
private:
    int* age;  

public:
    
    Student(int a) {
        age = new int(a);
    }

    
    void display() {
        cout << "Age: " << *age << endl;
    }

    
    ~Student() {
        delete age;
        cout << "Memory freed!" << endl;
    }
};

int main() {
    Student* s1 = new Student(20);
    s1->display();

    delete s1;  

}

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num; 
    *ptr = 20;       
    cout << "Value of num: " << num << endl; 
}

#include <iostream>
using namespace std;

class cricket {
public:
    void cricketBall() {}  
};
class baseball : public cricket {
public:
    void cricketBall(int a, int b) {  
        cout << a+b <<endl;
    }
};

int main() {
    baseball obj1, obj2;
    obj1.cricketBall(10, 20);  
    obj2.cricketBall(20, 20);  
}

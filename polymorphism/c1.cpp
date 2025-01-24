#include <iostream>
using namespace std;

class math{
    public:
    float add(float a,float b)
    {
        cout << a+b<< endl;
    }
    int add(int a,int b)
    {
        cout << a-b<< endl;
    }
};

int main(){
    math obj1,obj2;
    obj1.add(10.6f,20.5f);
    obj2.add(20,10);
}

#include <iostream>
using namespace std;

int main()
{
    int person,I=-1,II=1,jawab;
    cout << "enter number";
    cin >> person;
    for (int  i = I; i < person; i++)
    {
        jawab = I+II;
        cout << jawab <<endl;
        I=II;
        II=jawab;
    }
}

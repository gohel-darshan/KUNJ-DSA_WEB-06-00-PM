#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter a number between 1 and 7 to select a day of the week:";
    cin >> a;

    switch(a)
    {
        case 1:
            cout << "monday";
            break;

        case 2:
            cout << "trusday";
            break;

        case 3:
            cout << "wensaday";
            break;

        case 4:
            cout << "tusday";
            break;

        case 5:
            cout << "friday";
            break;

        case 6:
            cout << "saturday";
            break;

        case 7:
            cout << "sunday";
            break;

        default:
            cout <<"invalid";
            break;
    }
}
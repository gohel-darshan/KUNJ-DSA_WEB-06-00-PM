#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "enter element in array";
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "element ";
        cin >> box[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "element is " << box[i] << " ";
    }
    
    for (int  i = 1; i <size; i++)//50 20 40
    {
       int key = box[i],j;
       j=i-1;
       while (j >= 0 && box[j] >key)
       {
            box[j+1]=box[j];
            j=j-1;
       }
       box[j+1]=key;
    }

    cout << "------------------"<< endl;

    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }   
}
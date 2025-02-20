#include <iostream>
using namespace std;

int main()
{
    int size;
   
    cout << "Enter number of elements in array: ";
    cin >> size;

    int box[size];
   
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> box[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i; 

        for (int j = i + 1; j < size; j++)//100 50 30 40 70  1  , 50 30 100 40 70  2
        {
            if (box[j] < box[minIndex]) // 30 < 100 
            {
                minIndex = j; // 2
            }
        }

        if (minIndex != i)
        {
            int temp = box[i];
            box[i] = box[minIndex];
            box[minIndex] = temp;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    cout << endl;
}
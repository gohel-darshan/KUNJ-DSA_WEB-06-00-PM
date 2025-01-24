#include<iostream>
using namespace std;

int main(){
    int size,sum=0;
    float avg;
    cout << "enter the size";
    cin >> size;

    int box[size][size];
    for (int i = 0; i < size; i++)
    {
        for(int j=0;j < size; j++)
        {
            cout << "Elements a[" << i << "][" << j <<"]=";
            cin >> box[i][j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        for(int j=0;j < size; j++)
        {
        
            sum += box[i][j];
        }

    }
    avg=(float)sum/size;
    cout << "enter the average"<<avg;
    
}
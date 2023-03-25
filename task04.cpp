#include<iostream>
using namespace std;

void arraypassing(int arr[],int rowSize);

main()
{
    system("cls");

    int rowSize = 4;
    int num[rowSize] = {9,11,14,19};
    arraypassing(num,rowSize);
}


void arraypassing(int arr[],int rowSize)
{
    for(int i = 0; i < rowSize; i++)
    {
        cout << arr[i] << "\t";
    }
}
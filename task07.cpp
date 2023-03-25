#include<iostream>
using namespace std;

void rotateMatrix(int arr1[],int n);
void sortarray(int arr[]);
main()
{
    system("cls");

    int num[7] = {88,11,14,1,2,4,6};
    rotateMatrix(num,4);
}


void rotateMatrix(int arr[],int n)
{
    int i = 6;
    for(int j = 0; j < n; j++)
    {
        int temp = arr[0];
        sortarray(arr);
        arr[i] = temp;
    }

    for(int j = 0; j < 7; j++)
    {
        cout << arr[j] << "\t";
    }



}

void sortarray(int arr[])
{
    for(int j = 0; j < 7; j++)
    {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
    }
}
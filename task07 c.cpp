#include<iostream>
using namespace std;

void rotateMatrix(int arr1[],int n);

main()
{
    system("cls");

    int num[7] = {0,11,14,1,2,4,6};
    rotateMatrix(num,2);
}


void rotateMatrix(int arr[],int n)
{
    int i = 6;
    for(int j = 0; j < n; j++)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i--; 
    }

    for(int j = 0; j < 7; j++)
    {
        cout << arr[j] << "\t";
    }



}
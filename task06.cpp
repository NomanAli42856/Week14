#include<iostream>
using namespace std;

void mergeMatrix(int arr1[],int arr2[]);

main()
{
    system("cls");

    int rowSize = 3;
    int num1[rowSize] = {0,11,14};
    int num2[rowSize] = {12,15,17};
    mergeMatrix(num1,num2);
}


void mergeMatrix(int arr1[],int arr2[])
{
    int res[2][3];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i==0)
            {
                res[i][j] = arr1[j];
            }
            if(i==1)
            {
                res[i][j] = arr2[j];
            }
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << res[i][j] << "\t";
        }
        cout << endl;
    }


}
#include<iostream>
using namespace std;

bool mergeMatrix(int arr[][3],int rowSize);

main()
{
    system("cls");

    int rowSize = 3;
    int num[rowSize][3] = {
                            {0,11,14},
                            {9,0,0},
                            {0,2,0}
                        };
    cout << mergeMatrix(num,rowSize);
}


bool mergeMatrix(int arr[][3],int rowSize)
{
    int count = 0;
    bool flag = false;
    for(int i = 0; i < rowSize; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if(count > 3*3/2)
    {
        flag = true;
    }
    return flag;
}
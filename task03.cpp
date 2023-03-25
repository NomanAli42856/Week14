#include<iostream>
using namespace std;

void swap();
void changeValue(int *num);

main()
{
    system("cls");

    int num1 = 10;
    int num2 = 20;
    int *p;
    int *q;
    p = &num1;
    q = &num2;
    cout << "Before : " << num1 << "\t" << num2 << endl;
    swap(num1,num2);
    cout << "After : " << num1 << "\t" << num2 << endl;
    changeValue(&num1);
    cout << "After prt : " << num1 << "\t" << num2 << endl;
}


void swap(int &num1,int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void changeValue(int *num)
{
    (*num)++;
}
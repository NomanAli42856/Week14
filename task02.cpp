#include<iostream>
using namespace std;


main()
{
    system("cls");

    int num;
    int *Adofnum;
    num = 15;
    Adofnum = &num;
    cout << "Number : " << num << endl;
    cout << "Address of the number : " << Adofnum;

}

#include <iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void sum(double x, double y)
{
    double sum = x + y;
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,5);
    cout << "-------------" << endl;
    SetConsoleTextAttribute(h,5);
    cout << x << " + " << y << " = " << sum << endl;
    SetConsoleTextAttribute(h,5);
    cout << "-------------" << endl;
    getch();
    system("cls");
   
}
void sub(double x, double y)
{
    double sub = x - y;
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,5);
    cout << "-------------" << endl;
    SetConsoleTextAttribute(h,5);
    cout << x << " - " << y << " = " << sub << endl;
    SetConsoleTextAttribute(h,5);
    cout << "-------------" << endl;
    SetConsoleTextAttribute(h,5);
    getch();
    system("cls");
}
void mul(double x, double y)
{
    double mul = x * y;
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,5);
    cout << "-------------" << endl;
    SetConsoleTextAttribute(h,5);
    cout << x << " x " << y << " = " << mul << endl;
    SetConsoleTextAttribute(h,5);
    cout << "-------------" << endl;
    SetConsoleTextAttribute(h,5);
    getch();
    system("cls");
}
void division(double x, double y)
{
    float div = x / y;
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,5);
    cout << "-------------" << endl;
    SetConsoleTextAttribute(h,5);
    cout << x << " / " << y << " = " << div << endl;
    SetConsoleTextAttribute(h,5);
    cout << "-------------" << endl;
    SetConsoleTextAttribute(h,5);
    getch();
    system("cls");
}

int main()
{
    int ch;
    double num1, num2;
    // label:
    start:
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,4);
    cout << "-------------------------------" << endl;
    SetConsoleTextAttribute(h,15);
    cout << "            MENU" << endl;
    SetConsoleTextAttribute(h,10);
    cout << "-------------------------------" << endl;
    SetConsoleTextAttribute(h,11);
    cout << "      Press 1 : addition" << endl;
    cout << "      Press 2 : Subtraction" << endl;
    cout << "      Press 3 : multiply" << endl;
    cout << "      Press 4 : Divsion" << endl;
    cout << "      Press 5 : Exit" << endl;
    SetConsoleTextAttribute(h,5);
    cout << "-------------------------------" << endl;
    SetConsoleTextAttribute(h,10);
    cout << "    Enter operation key :" << endl;
    SetConsoleTextAttribute(h,5);
    cout << "-------------------------------" << endl;
    SetConsoleTextAttribute(h,15);
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter first number :" << endl;
        cin >> num1;
        cout << "Enter second number :" << endl;
        cin >> num2;
        Sleep(1000);
        system("cls");
        sum(num1, num2);
        break;
    case 2:
        cout << "Enter first number :" << endl;
        cin >> num1;
        cout << "Enter second number :" << endl;
        cin >> num2;
        Sleep(1000);
        system("cls");
        sub(num1, num2);
        break;
    case 3:
        cout << "Enter first number :" << endl;
        cin >> num1;
        cout << "Enter second number :" << endl;
        cin >> num2;
        Sleep(2000);
        system("cls");
        mul(num1, num2);
        break;
    case 4:
        cout << "Enter first number :" << endl;
        cin >> num1;
        cout << "Enter second number :" << endl;
        cin >> num2;
        Sleep(2000);
        system("cls");
        division(num1, num2);
        break;
    case 5:
        exit(0);
        break;
    default:
        cout << "Invaild choice ";
        getch();
        system("cls");
        break;
    }
    goto start;
    //  goto label;
    return 0;
}
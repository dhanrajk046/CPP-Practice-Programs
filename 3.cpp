//Program of calculator in c++
#include <iostream>
using namespace std;

int main(){
    char op;
    double num1, num2;

    cout<<"Enter operator (+,-,*,/):";
    cin>>op;

    cout<<"Enter first numbers:";
    cin>>num1;

    cout<<"Enter second numbers:";
    cin>>num2;

    switch (op) {
        case '+':
            cout<<num1<<"+"<<num2<<"="<<num1 + num2;
            break;
        case '-':
            cout<<num1<<"-"<<num2<<"="<<num1 - num2;
            break;
        case '*':
            cout<<num1<<"*"<<num2<<"="<<num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout<<num1<<"/"<<num2<<"="<<num1 / num2;
            else
                cout<<"Error! Divison by zero.";
            break;
        default:
            cout<<"Error! Opertor is not correct";
            break;

    }
    return 0;
    
}
//there are two types of header files:
//1. System header files" It comes with the compiler
#include <iostream>
//2.User deffined header files: It is written by the programmer
// #include "this.h" // --> this will produce an error if this.h is no present in the directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operator in C++"<<endl;
    //Arithmetic operators
    cout<<"The value a + b is "<<a+b<<endl;
    cout<<"The value a - b is "<<a-b<<endl;
    cout<<"The value a * b is "<<a*b<<endl;
    cout<<"The value a / b is "<<a/b<<endl;
    cout<<"The value a % b is "<<a%b<<endl;
    cout<<"The value a++ is "<<a++<<endl;
    cout<<"The value a-- is "<<a--<<endl;
    cout<<"The value ++a is "<<++a<<endl;
    cout<<"The value --a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='d';

    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value a == b is "<<(a==b)<<endl;
    cout<<"The value a != b is "<<(a!=b)<<endl;
    cout<<"The value a >= b is "<<(a>=b)<<endl;
    cout<<"The value a <= b is "<<(a<=b)<<endl;
    cout<<"The value a > b is "<<(a>b)<<endl;
    cout<<"The value a < b is "<<(a<b)<<endl;

    //Logical operators
    cout<<"Following are the logical opertors in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a>b)) is:"<<((a==b) && (a>b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;

    return 0;
    
}
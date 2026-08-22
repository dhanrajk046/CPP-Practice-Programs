#include<iostream>
using namespace std;

// Q1. Sum of 2 no. using functions

// int Sum(int m, int n) // Function declare
// {
//     int ans = m+n;  // Function define
//     return ans;
// }

// int Mul(int m, int n)
// { 
//     int Mul = m*n;
//     return Mul;
// }

// void fun()
// {
//     cout<<"Hello Coder Army\n";
// }



// int main()
// {
//     int a,b;
//     cout<<"Enter 2 number: ";
//     cin>>a>>b;

//     //Function call
//     // int ans = Sum(a,b);
//     // cout<<ans;
//     cout<<Sum(a,b);
//     cout<<endl;
//     cout<<Mul(a,b);
//     cout<<endl;
//     fun();
// }


// Q2. Prime Number using function

// bool Prime(int n)
// {
//     if(n<2)
//     return 0;

//     for (int i = 2; i < n; i++)
//     {
//         /* code */
//         if(n%i == 0)
//         return 0;
//     }
//     return 1;
// }

// void Prime(int n)
// {
//     if(n<2)
//     {
//         cout<<0<<endl;
//         return ;
//     }

//     for (int i = 2; i < n; i++)
//     {
//         /* code */
//         if(n%i == 0)
//         {
//             cout<<0<<endl;
//             return ;
//         }
//     }
//     cout<<1<<endl;
//     return ;
// }

// int Fact(int n=3) // Default parameter
// {
//     int ans =1;
//     for ( int i = 1; i <= n; i++)
//     {
//         /* code */
//         ans=ans*i;
//     }
//     return ans;
// }


// int main()
// {
//     int a,b;
//     cout<<"Enter the number: ";
//     cin>>a>>b;

//     cout<<Fact();
//     cout<<endl;
//     // A is a prime or not
//     Prime(a);
//     // A ka Factorial
//     cout<<Fact(a)<<endl;
//     // B is prime or not
//     Prime(b);
//     // B ka Factorial
//     cout<<Fact(b)<<endl;
//     // B-A ka prime or not
//     Prime(b-a); 
//     // B-A ka Factorial
//     cout<<Fact(b-a)<<endl;
// }


// Q3.Swaping numbers 
// a = b
// b = c
// c = a

// void swap(int a, int b) // Pass by value
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<" ";
// }


// void swap(int &a, int &b) // Pass by reference
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<endl;

//     float f1=4.8, f2=3.6;
//     swap(f1,f2);
//     cout<<f1<<" "<<f2;
// }

// void Swap(int &a, int &b) // Function Overloading
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

// void Swap(float &c, float &d) 
// {
//     float r=c;
//     c=d;
//     d=r;
// }


int main()
{
    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1=4.8, f2=3.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
}
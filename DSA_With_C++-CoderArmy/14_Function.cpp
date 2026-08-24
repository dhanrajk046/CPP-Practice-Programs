// #include<iostream>
// using namespace std;

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


// HomeWork

// Q1

// #include<iostream>
// using namespace std;

// int cube(int n)
// {
//     return n*n*n;
// }

// int main()
// {
//     int n;
//     cin>>n;
    
//     cout<< cube(n);

//     return 0;

// }

// Q2
// Constrait: -5000 <= n <= 5000

// #include<iostream>
// using namespace std;

// int reverseNumber(int n)
// {
//     int sign = 1;

//     if (n<0)
//     {
//         sign = -1;
//         n = -n;
//     }

//     int rev = 0;

//     while (n>0)
//     {
//         int digit = n%10;
//         rev = rev*10 + digit;
//         n = n/10;
//     }
//     return sign*rev;   
// }

// int main()
// {
//     int n;
//     cin>>n;

//     cout<<reverseNumber(n);

//     return 0;
// }

// Q3

// #include<iostream>
// using namespace std;

// void change(int &a, int &b, int &c)
// {
//     int temp = a;

//     a = c;
//     c = b;
//     b = temp;
// }

// int main()
// {
//     int a, b, c;
//     cin>>a>>b>>c;

//     change(a, b, c);

//     cout<< a << " " << b << " " << c;
    
//     return 0;
// }

// Q4

// Note: With the stated range, a+b can exceeds the range of int in some cases if the upper bound is really 100000, so this particular constraint is safe for int.

// #include<iostream>
// using namespace std;

// void swapNumbers(int &a, int &b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b ;

//     swapNumbers(a,b);

//     cout << a << " " << b;

//     return 0;
// }


// Q5

// #include<iostream>
// using namespace std;

// void printMessage(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         cout<< "Hello Coder Army" <<endl;
//     }
    
// }
// int main()
// {
//     int n;
//     cin>> n;

//     printMessage(n);

//     return 0;
// }


// Q6
// We can calculate: nCr = n! / (r! * (n-r)!)



#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
     }
     return fact;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << nCr(n ,r);

    return 0;
}


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     // Print the address of a 
//     cout<<&a<<endl;
//     int *ptr = &a;
//     cout<<ptr<<endl;
//     float m = 2.6;
//     float *ptr1 = &m;
//     cout<<ptr1<<endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     // Print the address of a 
//     cout<<&a<<endl;
//     int *ptr = &a;
//     cout<<sizeof(ptr)<<endl;
//     double m = 2.6;
//     double *ptr1 = &m;
//     cout<<sizeof(ptr1);
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     // Print the address of a 
//     int *ptr = &a;
//     cout<<ptr<<endl; // address of a
//     cout<<*ptr<<endl; // value inside a 
//     int b = 20;
//     ptr = &b;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     b = 30;
//     cout<<*ptr<<endl; 
// }


// Homework

// Q2
#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    int *p = &num; // p stores the address of num

    // Increment num variable by 5 with the help of pointer p
    *p = *p + 5; // Alternatively: *p += 5;

    cout<<"Updated value of num: "<<num<<endl; // Output will be 15
    return 0;
}

// How It Works:

// 1. *p dereferences the pointer, which refers to the value stored at the memory address of num.

// 2.  *p = *p + 5 takes the current value (10), adds 5 to it, and stores the result back into the memory location pointed to by p, successfully  updating num to 15.
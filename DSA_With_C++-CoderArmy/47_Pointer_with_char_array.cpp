// #include<iostream>
// using namespace std;

// int main()
// {
//     char arr[5] = "1234";
//     char *ptr = arr;
//     cout<<static_cast<void*>(arr)<<endl;
//     cout<<(void*)ptr<<endl;
//     char name = 'a';
//     char *ptr1 = &name;
//     cout<<(void*)&name<<endl;
//     cout<<(void*)ptr1;
// }

// Pass by value

// #include<iostream>
// using namespace std;

// void swapping(int p1, int p2) 
// {
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;
//     cout<<&p1<<endl;
//     cout<<&p2<<endl;
//     cout<<p1<<" "<<p2<<endl;
// }

// int main()
// {
//     int first = 10, second = 20;
//     cout<<&first<<endl;
//     cout<<&second<<endl;
//     swapping(first,second);
//     cout<<first<<" "<<second;
// }

// Pass by Pointer

// #include<iostream>
// using namespace std;

// // 20       10       value 
// // first    second   variable name
// // 500      1000     address

// // 500      1000     value
// // p1       p2       var name
// // 10       20       address

// void swapping(int *p1, int *p2) // pass by pointer
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
//     cout<<p1<<endl;
//     cout<<p2<<endl;
//     cout<<&p1<<endl;
//     cout<<&p2<<endl;
// }

// int main()
// {
//     int first = 10, second = 20;
//     cout<<&first<<endl;
//     cout<<&second<<endl;
//     swapping(&first,&second);
//     cout<<first<<" "<<second;

// }


// Pass by reference

#include<iostream>
using namespace std;


#include <vector>

void swapping(int &p1, int &p2) // Pass by reference
{
    int temp = p1;
    p1 = p2;        // p1 first
    p2 = temp;      // p2 second

}

// 11
// num temp

void pass(vector<int>&temp)
{
    for(int i=0; i<5; i++)
    temp[i] = 20;
}

void dob(int p[]) // *p
{
    for(int i=0; i<5; i++)
    p[i] = p[i]*2;
}


int main()
{
    // Refernce variable
    // int num = 10;
    // int &temp = num; // num and temp are same
    // cout<<temp<<endl;
    // temp++;
    // cout<<num<<endl;
    // cout<<&temp<<endl;
    // cout<<&num<<endl;
    // int first = 10, second = 20;
    // cout<<&first<<endl;
    // cout<<&second<<endl;
    // swapping(first,second);
    // cout<<first<<" "<<second;

    int arr[5] = {1,2,3,4,5};
    dob(arr);
    for(int i=0; i<5; i++)
    cout<<arr[i]<<" ";
    vector<int>v(5,0);
    pass(v);
    for(int i=0; i<5; i++)
    cout<<v[i]<<" ";

}



// H.W.
// vector, string - reference help
// int arr, char arr pointer ki help se

/*

1. Vectors and Strings by Reference (&)
when you pass a vector or string by value, C++ creates a complete copy of the data, which is inefficient for large datasets. Passing by 
reference (&) passes the original variable directly. Use const if you only want to read the data without modifying it.

2. Int and Char Arrays using Pointers 
Arrays naturally decay into pointers when passed to functions.

Integer arrays do not have a built-in end marker, so you must pass the size along with the pointer.

Character arrays (C-style strings) use the null-terminator (\0) to signal the end, so a seperate size sin't strictly required.

*/


/*
Homework


Q1. What is type casting in C++?

Type casting in C++ is the process of converting a variable or value from one data type to another. It is divided into two main categories:

1. Implicit Type Casting (Automatic)
Done automatically by the compiler when there is no risk of data loss. For example, converting a smaller data type (like int) to a larger one (like double).

C++
int a = 10;
double b = a; // Implicitly cast from int to double

2. Explicit Type Casting (Manual)
Done explicitly by the programmer. While C-style casting ((int)x or int(x)) works, C++ provides four specialized, safer cast operators:

A. Static_cast: Used for standard, well-defined conversions (e.g., float to int, or related pointer types). It performs compile-time checks.

B. Dynamic_cast: Used for safe downcasting in polymorphic class hierarchies (classes with virtual functions). It checks at runtime and returns nullptr if the cast fails for pointers.

C. Const_cast: Used specifically to add or remove the const or volatile qualification from a variable.

D. Reinterpret_cast: A low-level, risky cast used for bitwise reinterpretation (e.g., converting a pointer to an integer and back).



Q2. What is Static Cast in  C++?

Static_cast is the most commonly used explicit type casting operator in C++. It handles conversions between compatible types at compile time, making it faster and safer than traditional C-style casts because the compiler performs type checking.

Common Use Cases
1. Standard Data Type Conversions: Converting between fundamental types where standard conversions exist, such as float to int, double to float, or char to int.

C++
double pi = 3.14159;
int roundedPi = static_cast<int>(pi); // Safely converts to 3

2. Class Hierarchies (Upcasting and Downcasting):

A. Upcasting (Derived to Base): Safe and implicit, but static_cast can be used explicitly.

B. Downcasting (Base to Derived): Allowed, but unsafe if the base pointer doesn't actually point to the derived object, because static_cast does not perform runtime type checking. For safe downcasting with polymorphic classes, dynamic_cast is preferred.

3. Void Pointers to Typed Pointers: Converting a void* back to its original pointer type.

C++
int a = 10;
void* ptr = &a;
int* intPtr = static_cast<int*>(ptr); // Converts void* back to int*

Key Characteristics
1. Compile-time check: Errors are caught during compilation, not execution.

2. No runtime overhead: Unlike dynamic_cast, it doesn't check type safety while the program is running.

*/


// Homework Sheet
/*

1. What is void* and what is its use case?
Definition: A void* (generic pointer) is a special pointer type that can hold the memory address of any data type (e.g., int, float, custom objects).

Limitations: It cannot be dereferenced directly (e.g., *ptr is invalid) because the compiler doesn't know he size or type of data it points to. Pointer arithmetic is alos not allowed on void* without casting.

Use Cases: Used in low-level programming, memory allocation routines (like malloc), and passing raw, untyped memory buffers to functions.

2. What is static_cast in C++?
It is a compile-time explicit type-casting operator used for safe and predictable conversions between compatible types (such as float to int, 
standard numeric conversions, or base-to-derived pointer casting). It performs type checking during compilation rather than at runtime.

3. Difference between const char *str and char *str
const char *str = "Hello, World!";: Points to a string literal stored in read-only memory. You cannot modify the characters of the string through this pointer(e.g., str[0] = 'J' is illegal). This is the correct and modern C++ approach.

char *str = "Hello, World!";: Assigns a read-only string literal to a non-const pointer. In modern C++ (C++11 onwards), this is deprecated or 
invalid (ISO C++ forbids it) because modifying a string literal results in undefined behavior (usually a segementation fault).

4. Completed calculateLength Function

#include<iostream>
using namespace std;

int calculateLength(const char *str) {
    int length=0;
    while(str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main() 
{
    const char *myString = "Hello, World!";
    cout<<"Length of the string: "<<calculateLength(myString)<<endl;
    return 0;
}

5. Completed isPalindrome Function

#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(cast char *str) {
    int len =0;
    while(str[len] != '\0')
    {
    len++;
    }

    int start = 0;
    int end = len - 1;

    while(start < end)
    {
        if(str[start] != str[end])
            return false;
        }
        start++;
        end--;
    }
    return true;
} 


int main() 
{
    const char *palindrome1 = "level";
    const char *palindrome2 = "hello";
    cout<<"Is '"<<palindrome1<<"' a palindrome? " << (isPalindrome(palindrome1) ? "Yes" : "No") << endl;
    cout<<"Is '"<<palindrome2<<"' a palindrome? " << (isPalindrome(palindrome2) ? "Yes" : "No") << endl;
    return 0;
}

*/




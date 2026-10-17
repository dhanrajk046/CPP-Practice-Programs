// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     // arr++; //not allowed  
//     int *ptr = arr;
//     // Print the address of first element or 0 index
//     // cout<<arr<<endl;
//     // cout<<arr+0<<endl;
//     // cout<<&arr[0]<<endl;
//     // cout<<ptr<<endl;

//     // // Print the address of second element or 1 index
//     // cout<<arr+1<<endl;
//     // cout<<&arr[1]<<endl;

//     // // print the value of 0 index
//     // cout<<arr[0]<<endl;
//     // cout<<*arr<<endl;
//     // cout<<*(arr+0)<<endl;
//     // cout<<*ptr<<endl;

//     // // saare address ko print kar do

//     // for(int i=0;i<5;i++)
//     // cout<<arr+i<<endl;

//     // Print all the value

//     // for(int i=0;i<5;i++)
//     // cout<<*(arr+i)<<endl;

//     // Print all the value

//     for(int i=0;i<5;i++)
//     cout<<ptr[i]<<" "<<endl;

//     // // Print all  the address
//     for(int i=0;i<5;i++)
//     cout<<ptr+i<<endl;

//     // // Arithmetic operation ptr++, ptr--, ptr = ptr+1

//     // // Print all the value
//     // for(int i=0;i<5;i++)
//     // {
//     //     cout<<*ptr<<" ";
//     //     ptr++;
//     // }
    
//     // H.w. Execute ptr--

//     // Corrected version
//     ptr = &arr[4];

//     for(int i=4; i >= 0; i--)
//     {
//         cout<<*ptr<<" "<<endl;
//         ptr--;
//     }

//     // Addition

//     // Safely reset ptr back to the start of the array for  future operations
//     ptr = arr;

//     ptr = ptr+3;
//     cout<<*ptr<<endl;

//     ptr = ptr-2;
//     cout<<*ptr<<endl;
// }


// Homework - Character array

// #include<iostream>
// using namespace std;

// int main() 
// {
//     // 1. Declare and initialize a character array
//     // (Note: '\0' is the null terminator which marks the end of the string)
//     char chArr[6] = {'H','e','l','l','o','\0'};
//     // or you can write it like this: char chArr[]= "Hello";

//     // --- METHOD 1: Direct Printing (unique to Char Arrays) ---
//     // In C++, passing a char pointer or char array to cout will
//     // print the entire string untill it hits the '\0' null terminator.
//     cout<<"1. Direct print: "<<chArr<<endl; 

//     // --- METHOD 2: Printing character by character using a loop ---
//     cout<<"2. Loop with index: ";
//     for(int i=0; i<5; i++)
//     {
//         cout<<chArr[i]<<" ";
//     }
//     cout<<endl; 
    
//     // --- METHOD 3: Printing using pointers (like your previous code) ---
//     char *ptr = chArr; // Points to the first character 'H'

//     cout<<"3. Loop with pointer: ";
//     for(int i=0; i<5; i++)
//     {
//         cout<<*ptr<<" ";
//         ptr++; // Move to the next character
//     }
//     cout<<endl;

//     return 0;
// }


// Home work - Sheet

// 1. Print the address of the first index of the char array in C++ 

// #include<iostream>
// using namespace std;

// int main()
// {
//     char chArr[5] = "abc";

//     // Use (void*) so cout prints the address instead of the string characters
//     cout<<"Address of first index: "<<(void*)&chArr[0]<<endl;
// }


// 2. Print the address of a char variable in C++

// #include<iostream>
// using namespace std;

// int main()
// {
//     char ch = 'A';

//     // Typecast to (void*) to print the raw memory address
//     cout<<"Address of char variable: "<<(void*)&ch<<endl;
// }


// 3. Print the address of a string in C++

// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str = "Hello";

//     // 1. Address of the string object
//     cout<<"Address of the string object: "<<&str<<endl;

//     // 2. Address of the first chracter inside the string 
//     cout<<"Address of first character of string: "<<(void*)&str[0]<<endl;
// }


// 4. Difference between arr and &arr (int arr[5] = {1,2,3,4,5};)
// Even though arr and &arr point to the exact same numeric memory location (the start of the array), their types and pointer arithmetic behavior ar completely different:

// arr (Pointer to the first element):

// Type: int* (Pointer to an integer).

// Arithmetic (arr+1): Moves forward by the size of one element (sizeof(int) = 4 bytes).

// &arr (Pointer to the entire array):

// Type: int (*)[5] (Pointer to an aray of 5 integers).

// Arithmetic (&arr + 1): Moves forward by the size of the entire array (5 * sizeof(int) = 20 bytes).


// 5. Print array in reverse using a pointer to the last element

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    // Create a pointer storing the address of the last element
    int *ptr = &arr[4]; // or ptr = arr + 4;

    // Print all elements from the last index to the 0th index
    for(int i=4; i>=0; i--)
    {
        cout<<*ptr<<" ";
        ptr--; //. Move pointer backward
    }
    cout<<endl;
}
#include <iostream>
using namespace std;

// void fun(int **p1)
// {
//     // *p = *p+10;
//     // p1++;
//     *p1 = *p1 + 1;
// }

// int main()
// {
//     int n = 10;
//     int *p = &n; //single pointer
//     int **p2 = &p; // Doble pointer

//     // int ***p3 = &p2; // Triple pointer
//     // // cout<<p<<endl;
//     // // cout<<&p<<endl;
//     // // cout<<p2<<endl;
//     // // cout<<&p2<<endl;
//     // // cout<<p3<<endl;

//     // // Value ko modify karna ho, jo n mein rakhi hai...
//     // // *p = *p+5;
//     // // cout<<n<<endl;
//     // ***p3 = ***p3+10;
//     // cout<<n<<endl;

//     cout<<p<<endl;
//     fun(p2);
//     cout<<p<<endl;

// }

// Q1

// int main()
// {
//     char c[] = "GATE2024";
//     char *p = c;
//     cout<<p+p[3]-p[1];
//     cout<<endl;
// }

// Q2

// void second(int *p1, int *p2)
// {
//     p1 = p2;
//     *p1 = 2;
// }

// int main()
// {
//     int i = 0, j = 1;
//     second(&i,&j);
//     cout<<i<<" "<<j<<endl;
// }

// Q3

// int main()
// {
//     int *ptr;
//     int x=0;
//     ptr=&x;
//     int y=*ptr;
//     *ptr=1;
//     cout<<x<<" "<<y<<endl;
// }

// Q4

// int main()
// {
//     int a = 5, b = 10;
//     int &name = a;
//     int *ptr = &a;
//     (*ptr)++;
//     ptr = &b;
//     *ptr = *ptr+5;
//     name+=5;
//     cout<<a<<" "<<b;
// }

// Q5

// int four(int x, int *py, int **ppz)
// {
//     int y,z;
//     **ppz+=1; z=**ppz;
//     *py+=2; y=*py;
//     x+=3;
//     return x+y+z;
// }

// int main()
// {
//     int c, *b, **a;
//     c=4, b=&c, a=&b;
//     cout<<four(c,b,a);
// }

// Q6

// void five(char *str1, char *str2)
// {
//     while(*str1=*str2)
//     {
//         str1++,str2++;
//     }
// }

// int main()
// {
//     char first[] = "Mohit";
//     char second[] = "Rohan";
//     five(first, second);
//     cout<<first;
//     return 0;

// }

// Address of p

int main()
{
    int n = 10;
    int *p = &n;
    int **q = &p;
    cout << p << endl;
}

/* Homework

 Q1. Derefernce Operator

In C++, the derefernce operator is represented by the asterick (*). It is also known as the indirection operator.

Its primary purpose is to access or modify the value stored at the memory address held by a pointer.

How It Works
To understand the derefernce operator, it helps to look at its relationshipt with the address-of operator (&):

& (Address-of): Gets the memory address of a variable.

* (Dereference): Takes a memory address and gets (or sets) the value stored at that address.


Code Example
Here is a simple demonstration of how the derefernce operator works in practice:

#include <iostream>
using namespace std()

int main()
{
    int age = 25;       // A normal integer variable
    int *ptr = &age;    // A pointer storing the memory address of 'age'

    // 1. Printing the value using the dereference operator
    cout<<"Value of age: "<<*ptr<<endl;  // Output: 25

    // 2. Modifying the value through the pointer
    *ptr = 30;         // Changes the value of 'age' to 30

    cout<<"New value of age: "<<age<<endl;    // Output: 30

    return 0;
}


Key Use Cases
1. Reading Data: Accessing the value a pointer points to (e.g., cout<<*ptr;).

2. Writing/Modifying Data: Changing the value at the target memory location (e.g., *ptr = 100;).

3. Dynamic Memory: Accessing data allocated on the heap using pointers 9e.g., int* arr = new int (5); cout<<*arr;).

4. Member Access with Pointers (->): When dealing with pointers to objects or strucks, the dereference operator is oftern combined with member
access. Instead of writing (*ptr).member, C++ provides the arrow operator (ptr->member) as a shorthand.

Important Things to Remember
1. Do not dereference uninitialised or null pointers: Attempting to dereference a nullptr or a pointer pointing to random memory will result
in a segementation Fault (Undefined Behavior) and crash your program.

2. Distinguish from Declaration: The asterisk is also used to declare a pointer (e.g., int *ptr;). Don't confuse the declaration syntax with
the dereferencing action (*ptr = 5;), though they use the same symbol.



// Q2. What is Reference Variable? Explain with Example

In C++, a reference variable is an alias (an alternative name) for an existing variable. Once a reference is initialised to a variable, any
changes made to the reference are actually made to the original variable, because they share the exact same memory location.

Syntax
Todeclare a reference variable, you use the ampersand (&) symbol between the data type and the reference name:

C++
datatype &refName = variableName;


Key characteristics of References

1. Must be initialized: You connot declare a reference without pointing it to a variable. It must be bound at creation (e.g., int& ref; will
cause a compilation error).

2. Cannot be Reassigned: Once a reference is bound to a variable, it cannot be changed to reference a different variable later. Any assignment
to it just changes the value of the original variable.

3. No Dereferencing Needed: Unlike pointers (which require * to access the value), you can use a reference variable directly just like a
normal variable.

4. Common Use Case (Function Arguments): Reference are frequently used in functions to pass arguments by reference, allowing the function to
modify the caller's variables directly without copying them.


C++
void increment(int& num) {
    num++; // Modifies the original variable passed into the function
}

Example

#include <iostream>

using namespace std; //Brings the std namespace into scope

int main()
{
    int score = 95;            //Original variable
    int& scoreRef = score;     // 'scoreRef' is a reference to 'score'

    // 1. Both variable hold the same value and memory address
    cout<<"Score: "<<score<<endl;                 // Output: 95
    cout<<"Score Ref: "<<scoreRef<<endl;          // Output: 95

    // 2. Modifying the reference modifies the original variable
    scoreRef = 100;

    cout<<"After modifying reference:"<<endl;
    cout<<"Score: "<<score<<endl;                // Output: 100
    cout<<"Score Ref: "<<scoreRef<<endl;         // Output: 100

    return 0;
}

// Homework Sheet

// Q1. What is the difference between static memory allocation and dynamic memory allocations?

Static Memory Allocation
1.Timing: Happens at compile-time before the program runs.

2. Memory Location: Allocated on the Stack (or Data/BSS segments for global/static variables).

3. Size: Fixed; the size must be known beforehand and cannot be changed or resized during execution.

4. Management: Managed automatically by the compiler (allocated when entering scope, deallocated when leaving scope).

5. Performance / Safety: Faster allocation, but carries the risk of a stack overflow if too much memory is declared.

Dynamic Memory Allocation
1. Timing: Happens at run-time while the program is actively executing.

2. Memory Location: Allocated on the Heap.

3. Size: Flexible; the size can be determined based on user input or program conditions and can be modified or resized.

4. Management: Managed manually by the programmer using new and delete (or malloc and free in C). Forgetting to free memory leads to memory
leaks.

5. Performance / Safety: Slightly slower due to runtime overhead, and carries risks like memory leaks or dangling pointer if not managed
carefully.



Ans 2. Predict the output

Output:

Plaintext
HELLO WORLD
Explanation: The function loops through the string myString. If a character falls within the lowercase range ('a' to 'z'), it converts it to uppercase by subtracting 'a' and adding 'A'. Spaces and already uppercase characters are ignored.



Ans 3. Predict the output
Output / Behavior: Undefined Behavior (Buffer Overflow)

Explanation:

char first[] = "Good"; allocates an array of size 5 (4 characters + 1 null terminator \0).

The function attempts to concatenate "Morning" (7 characters) into first starting from the end of "Good".

Because first does not have enough allocated memory to hold "GoodMorning" (which needs 12 bytes including \0), writing past the array bounds causes a stack buffer overflow, which can corrupt stack memory or crash the program. (If it had sufficient space, the output would be GoodMorning).


Ans 4. Predict the output without running it on compiler
Output:

Plaintext
gnimmargorP
Explanation: The function finds the end of the string, places an end pointer right before the null terminator, and uses a two-pointer approach to swap characters from both ends moving inward until they meet in the middle, effectively reversing "Programming".


Ans 5. Predict Output without running it on CompilerOutput:Plaintext8 2
Explanation:Initial: x = 5, y = 3*a += *b; $\rightarrow$ x = 5 + 3 = 8*b = abs(*a - 2 * (*b)); $\rightarrow$ y = abs(8 - 2 * 3) = abs(8 - 6) = 2Result: x = 8, y = 2.


Ans 6. 6. Predict the output (First 6)
Output:

Plaintext
Vowels: 3, Consonants: 7
Explanation: The function analyzes "Hello, World!":

Vowels: e, o, o (Total = 3)

Consonants: H, l, l, W, r, l, d (Total = 7)

Punctuation ( , ,, !) and non-alphabetic characters are ignored.


Ans 7. Predict Output (Second 6 / Question 7)
Output:

Plaintext
54
Explanation: This is the classic arithmetic swap algorithm using pointers:

Initial: a = 4, b = 5

*i = *i + *j;
→ a = 4 + 5 = 9

*j = *i - *j;
→ b = 9 - 5 = 4

*i = *i - *j;
→ a = 9 - 4 = 5

Final values: a = 5, b = 4. Printed together with cout << a << b; resulting in 54.


*/
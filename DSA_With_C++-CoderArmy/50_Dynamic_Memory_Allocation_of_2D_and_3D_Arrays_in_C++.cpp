// #include<iostream>
// using namespace std;

// int main()
// {
//     // Arrays create karna hai, jo store karenge address
//     // int n,m; //n=rows, m = cols
//     // cin>>n>>m;

//     // int **ptr = new int *[n];

//     // // Created 2d array
//     // for(int i=0;i<n;i++)
//     // {
//     //     ptr[i]= new int[m];
//     // }

//     // for(int i=0;i<n;i++)
//     // for(int j=0;j<m;j++)
//     // cin>>ptr[i][j];

//     // // Print the value
//     // for(int i=0;i<n;i++)
//     // {
//     //     for(int j=0;j<m;j++)
//     //     cout<<ptr[i][j]<<" ";
//     //     cout<<endl;
//     // }

//     // // Releases the memory, heap mein

//     // for(int i=0;i<n;i++)
//     // delete[] ptr[i];

//     // delete[] ptr;

//     int L,B,H;

//     cin>>L>>B>>H;

//     int ***ptr = new int **[L];

//     // create 2d array and store it's address in ptr

//     for(int i=0;i<L;i++)
//     {
//         ptr[i] = new int *[B];

//         for(int j=0;j<B;j++)
//         {
//             ptr[i][j] = new int[H];
//         }
//     }

//     for(int i=0;i<L;i++)
//     for(int j=0;j<B;j++)
//     for(int k=0;k<H;k++)
//     ptr[i][j][k] = i+j+k;

//     for(int i=0;i<L;i++)
//     for(int j=0;j<B;j++)
//     for(int k=0;k<H;k++)
//     cout<<ptr[i][j][k]<<" ";
// }


/* 

Homework

Q1, Memory Release Deletion code for 2D and 3D Arrays for dynamic memory allocation.

1. Deallocating 2D Dynamic Arrays
When you allocate a 2D array dynamically using pointers to pointers (int**), you must free the memory in reverse order of allocation to 
prevent memory Leaks.

// Assuming rows and cols are already defined 
// Deallocation preocess;
for(int i=0; i<rows; i++)
{
    delete[] arr[i];   // Free each individual row
}
delete[] arr;        // Free the array of rows pointers
arr = nullptr;       // Good practice to avoid dangling pointers


2. Deallocating 3D Dynamic Arrays
For a 3D array (int***), the deallocation requires nested loops to release memory layer by layer, starting from the innermost arrays.

// Assuming x, y, and z dimensions are defined
// Deallocation process;
for(int i=0; i<x; i++)
{
    for(int j=0; j<y; j++)
    {
        delete[] arr[i][j];   // Free the innermost 1D arrays
    }
    delete[] arr[i];          // Free the 2D plane pointer arrays
}
delete[] arr;                // Free the outermost pointer array
arr = nullptr;               // Reset pointer to null


3. Alternative: Flat Memory Allocation
Pointer-to-pointer allocations result in non-contiguous memory blocks and complex cleanups. Using a simple contiguous 1D block for 2D or 3D
data makes cleanup much simpler and improves cache performance.

Single-Line Cleanup Example

// For a 2D array flattened into a single block (int* arr = new int[rows * cols];)
delete[] arr;
arr = nullptr;


Q2. Create 4 D arrays Pointer

Allocating and Deallocating a $D Dynamic Array
Working with a 4D array (int****) means managing four Levels of pointer allocations. Just like 2D and 3D arrays, you allocate memory layer by 
layer and free it in exact reverse order to avoid memory Leaks.

#include<iostream>
using namespace std;

int main()
{
    int w = 2, x = 3, y = 4, z = 5; // Example dimensions

    // --- 1. ALLOCATION ---
    int**** arr = new int****[w];
    for(int i=0; i<w; i++)
    {
        arr[i] = new int**[x];
        for(int j=0; j<x;j++)
        {
            arr[i][j] = new int*[y];
            for(int k = 0; k<y; k++)
            {
                arr[i][j] = new int[z]; // Allocate the actual data block}
            }
        } 

    // --- 2. USAGE (Example) ---
    arr[0][1][2][3] = 42;
    cout<<"Value: "<<arr[0][1][2][3]<<endl;

    // --- 3. DEALLOCATION ---
    for(int i=0; i<w; i++)
    {
        for(int j=0; j<x; j++)
        {
            for(int k = 0; k<y; k++)
            {
                delete[] arr[i][j][k];   // Free innermost 1D arrays
            }
            delete[] arr[i][j];         // Free 2D pointer arrays
        }
        delete[] arr[i];                // Free 3D pointer arrays
    }
    delete[] arr;                      // Free outermost pointer array
    arr = nullptr;                     // Avoid dangling pointer
    return 0;
}


// Q3. Array implementation and Pointer - 2D array difference

1. Memory layout: Standard arrays use a single contiguous memory block, whereas pointer-to-pointer arrays use scattered blocks on the heap.

2. Allocation and scope: Standard arrays are allocated at compile-time on the stack, while pointer arrays are created dynamically on the heap at runtime.

3. Cache performance: Standard arrays offer high cache locality for faster traversal, unlike pointer arrays which suffer from scattered memory jumps.

4. Flexibility: Standard arrays have fixed dimensions, whereas pointer-to-pointer arrays support jagged layouts with varying row lengths.

5. Cleanup and deallocation: Standard arrays clean up automatically out of scope, while pointer arrays require explicit manual loops to avoid memory leaks.

6. Access syntax: Both use identical arr[i][j] syntax, but standard arrays use direct math offset while pointer arrays require multiple dereferences.


Examples:
1. True 2D Array (Contiguous Implementation)
when you declare a standard 2D array, the compiler treats it as a single block of memory divided into rows and columns.

#include<iostream>
using namespace std;

int main()
{
    // Statically allocated contiguous 2D array
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    // Accessing  elements
    cout<<"Element at [1][2]: "<<arr[1][2]<<endl;

    // No manual deallocation needed (stored on the stack)
    return 0;
}

2. Pointer-to-Pointer 2D Array (Dynamic Implementation)
When you use int**, you create an array of pointers, where each pointer points to a seperate 1D array representing a row.

#include<iostream>
using namespace std;


int main()
{
    int rows = 2, cols = 3;

    // Allocation
    int** arr = new int*[rows];
    for(int i=0; i<rows; i++)
    {
        arr[i] = new int[cols]; // Each row allocated separately
    }

    // Usage 
    arr[0][0] = 1;
    arr[1][2] = 6;

    // Deallocation (Required to prevent memory Leaks)
    for(int i=0; i<rows; i++)
    {
        delete[] arr[i];  // Free each row
    } 
    delete[] arr;    // Free the pointer array
    arr = nullptr;

    return 0;
}

Key Takeaway
Even though both use the same syntax for access (arr[i][j]), behind the scenes they are completely different. Use a true 2D array or a 
flattened 1D array when performance and contiguous memory matter, and use pointer-to-pointer only when you explicitly need a jagged array with 
rows of varying lengths.

// Homework Sheet

Q1.
Ans. 1. Output and Reason for 2D Array Expressions
1. cout << arr;

Output: Prints a memory address (e.g., 0x7ffee...).

Reason: The 2D array name arr decays into a pointer to its first row (int(*)[4]), printing the base address of the entire array.

2. cout << arr[0];

Output: Prints a memory address (numerically identical to arr).

Reason: arr[0] represents the first row and decays into a pointer to its first element (int*). While the numeric address matches arr, its pointer arithmetic step size is the size of a single integer, not an entire row.

3. cout << arr[0][0];

Output: Prints a garbage integer value.

Reason: arr[0][0] accesses the actual value stored at the first row and first column. Because the array is uninitialized, it prints whatever junk value resides in that memory location.


Q2.
Ans. Deallocating a Dynamic 3D Array in C++
Reverse order principle: Memory must be freed in the exact reverse order of its allocation to prevent memory leaks and undefined behavior.

Innermost loop (1D arrays): Iterate through the outer and middle dimensions to delete the innermost 1D data arrays using delete[] arr[i][j];.

Middle loop (2D pointer arrays): Release the 2D plane pointer arrays using delete[] arr[i];.

Outer cleanup: Delete the outermost pointer array using delete[] arr;.

Pointer reset: Set arr = nullptr; immediately after deletion to avoid dangling pointer issues.


Q3. 
Ans. Dynamically Creating a 4D Array in C++

#include<iostream>
using namespace std;

int main()
{
    int w = 2, x = 3, y = 4, z = 5;  // Dimensions for the 4D array

    // --- 1. ALLOCATION ---
    int**** arr = new int***[w];
    for(int i=0; i<w; i++)
    {
        arr[i] = new int**[x];
        for(int j=0;j<x;j++)
        {
            arr[i][j] = new int*[y];
            for(int k = 0;k<y;k++)
            {
                arr[i][j][k] = new int[z];   // Allocate the actual data blocks
            }
        }
    }


    // --- 2. USAGE ---
    arr[0][1][2][3] = 99;
    cout<<"Value at [0][1][2][3]: "<<arr[0][1][2][3]<<endl;

    // --- 3. DEALLOCATION ---
    for(int i = 0; i<w; i++)
    {
        for(int j=0; j<x; j++)
        {
            for(int k=0; k<y; k++)
            {
                delete[] arr[i][j][k];  //Free innermost 1D arrays
            }
            delete[] arr[i][j];        // Free 2D pointer array
        }
        delete[] arr[i];              // Free 3D pointer arrays
    }
    delete[] arr;                 // Free outermost pointer array
    arr = nullptr;               // Avoid dangling pointer

    return 0;
}
*/


#include<iostream>
using namespace std;

int main()
{
    int w = 2, x = 3, y = 4, z = 6;  // Dimensions for the 4D array

    // --- 1. ALLOCATION ---
    int**** arr = new int***[w];
    for(int i=0; i<w; i++)
    {
        arr[i] = new int**[x];
        for(int j=0;j<x;j++)
        {
            arr[i][j] = new int*[y];
            for(int k = 0;k<y;k++)
            {
                arr[i][j][k] = new int[z];   // Allocate the actual data blocks
            }
        }
    }


    // --- 2. USAGE ---
    arr[0][1][2][3] = 99;
    cout<<"Value at [0][1][2][3]: "<<arr[0][1][2][3]<<endl;

    // --- 3. DEALLOCATION ---
    for(int i = 0; i<w; i++)
    {
        for(int j=0; j<x; j++)
        {
            for(int k=0; k<y; k++)
            {
                delete[] arr[i][j][k];  //Free innermost 1D arrays
            }
            delete[] arr[i][j];        // Free 2D pointer array
        }
        delete[] arr[i];              // Free 3D pointer arrays
    }
    delete[] arr;                 // Free outermost pointer array
    arr = nullptr;               // Avoid dangling pointer

    return 0;
}
// #include<iostream>
// #include<climits>
// using namespace std;

// void printcol(int arr[][4], int row, int col)
// {
//     // column wise
//     for(int j =0; j<col; j++)
//     for(int i=0; i<row; i++)
//     cout<<arr[i][j]<<" "; 
// }

// void printrowmax(int arr[][4], int row, int col)
// {
//     int index = -1, sum = INT_MIN;

//     for(int i=0; i<row; i++)
//     {
//         int total = 0;
//         for(int j=0; j<col;j++)
//         total += arr[i][j];

//         if(total>sum)
//         {
//             sum=total;
//             index = i;
//         }
//     }
//     cout<<index<<" ";
// }

// void printsumdig(int matrix[][3], int row, int col)
// {
//     int first = 0;
//     int sec = 0;

//     // first diagonal sum
//     int i=0;
//     while(i<row)
//     {
//         first+=matrix[i][i];
//         i++;
//     }
//     // second diagonal
//     i =0;
//     int j = col-1;
//     while(j>=0)
//     {
//         sec+=matrix[i][i];
//         i++,j--;
//     }

//     cout<<first<<" "<<sec<<" ";
// }


//     // create 2 d array
//     int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     int arr2[3][4] = {0,1,3,4,6,7,10,11,41,18,9,11};
//     int ans[3][4];

//     // // Print all the values in array row wise
//     // for(int row=0; row<3; row++)
//     // for(int col= 0; col<4; col++)
//     // cout<<arr[row][col]<<" ";

//     // // Print all the value in array col wise, function call
//     // printcol(arr,3,4);

//     // Find an element in our array
//     int x=17;

//     // for(int row=0; row<3; row++)
//     // for(int col=0; col<4; col++)
//     // {
//     //     if(arr[row][col]==x)
//     //     {
//     //         cout<<"Yes ";
//     //         return 0;
//     //     }
//     // }
//     // cout<<"No ";

//     // Add 2 matrix

//     // for(int row=0; row<3; row++)
//     // for(int col=0; col<4; col++)
//     // {
//     //     ans[row][col] = arr1[row][col]+arr2[row][col];
//     // }
    
//     // for(int row=0; row<3; row++)
//     // for(int col=0; col<4;col++)
//     // cout<<ans[row][col]<<" ";

//     // H.W. - Subtraction of 2 Matrix     

//     // Print row index with maximum sum
//     // printrowmax(arr1,3,4);                                                                                                                                                                                             
    
//     // Print diagonal sum
//     int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
//     printsumdig(matrix,3,3);
// }

    // H.W.
    // Q1. Print Sum of Each Column;


// #include <iostream>
// using namespace std;

// int main() {
//     int rows = 3, cols = 3;
//     int matrix[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };


//     cout<<"Sume of each column:\n";
//     for(int j = 0; j<cols;j++)
//     {
//         int colSum = 0;
//         for(int i=0; i<rows;i++)
//         {
//             colSum += matrix[i][j];
//         }
//         cout<<"Column "<<j<<" sum: "<<colSum<<endl;
//     }
//     return 0;
// }

 // Q2. Print Matrix Subtraction (A-B)

// #include<iostream>
// using namespace std;

// int main() {
//     int rows = 2, cols = 2;
//     int A[2][2] = {
//         {5,6},
//         {7,7}
//     };
//     int B[2][2] = {
//         {1,2},
//         {3,4}
//     };
//     int result[2][2];

//     for(int i=0; i<rows;i++)
//     {
//         for(int j =0; j<cols; j++)
//         {
//             result[i][j] = A[i][j] - B[i][j];
//         }
//     }

//     // Printing result matrix A-B
//     cout<<"Result of Matrix A-B:\n";
//     for(int i=0; i<rows; i++) 
//     {
//         for(int j=0; j<cols;j++)
//         {
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }



// Q3. Sum of Diagonal Elements (Primary+Secondary, Avoiding Double Count)


// #include<iostream>
// using namespace std;

// int main() 
// {
//     int n = 3;
//     int matrix[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     int sum = 0;
//     for(int i =0; i<n; i++)
//     {
//         sum += matrix[i][i];
//         sum += matrix[i][n-1-i];
//     }


// // If n is odd, the center element is counted twice, subtract it once
//     if (n%2!=0)
//     {
//         sum -= matrix[n/2][n/2];
//     }
//     cout<<"Total diagonal sum(with overlap handled): "<<sum<<endl;
//     return 0;
// }

// Q4. What is Column-Major Order?
// Column-major order is a method used by programming languages and databases to store multidimensional arrays (like 2D matrices) in linear,
// one dimensional computer memory.

// How it works: In column-major order, elements of a single column are stored contiguously (back-to-back) in memory before moving on the next column.

// Contrast: This is the opposite of Row-major order (which is native to C++), where rows are stored contiguously in memory row by row.

// Q5. Find and print the largest element in the 2D-Array


// #include<iostream>
// using namespace std;

// int main(){
//     int rows = 3, cols = 3;
//     int matrix[3][3] = {
//         {12, 45, 2},
//         {99, 43, 56},
//         {7, 88, 23}
//     };


//     int maxVal = matrix[0][0];

//     for(int i =0; i<rows;i++)
//     {
//         for(int j=0; j<cols;j++)
//         {
//             if(matrix[i][j] > maxVal)
//             {
//                 maxVal = matrix[i][j];
//             }
//         }
//     }

//     cout<<"The largest element in the 2D array is: "<<maxVal<<endl;
//     return 0;
// }


// Q6. Find and Print the smallest element in the 2D Array

#include<iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3] = {
        {12,45,3},
        {99,34,56},
        {7,88,23}
    };

    int minVal = matrix[0][0];

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols;j++)
        {
            if(matrix[i][j]<minVal)
            {
                minVal = matrix[i][j];
            }
        }
    }

    cout<<"The smallest element in the 2D array is: "<<minVal<<endl;

    return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[1000];
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     cout<<"Enter the element in array: ";
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin>>arr[i];
//     }

//     for (int i = n-2; i >=0; i--)
//     {
//         /* code */
//         bool swapped = 0;
//         for (int j = 0; j <=i; j++)
//         {
//             /* code */
//             if(arr[j]>arr[j+1])
//             {
//                 swapped=1;
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//         if(swapped==0)
//         break;
        
//     }
//     cout<<"Sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout<< arr[i] << " ";
//     }
//     cout<<endl;
//     return 0;
   
// }


// Homework

// Q1.
// #include<iostream>
// using namespace std;


// int main() {
//      int arr[1000];
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     cout<<"Enter the element in array: ";
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin>>arr[i];
//     }

//     for (int i = 0; i < n - 1; i++) {
//         bool swapped = false;
//         for (int j = 0; j < n - i - 1; j++) {
//             // Flip the sign to '<' to push smaller elements to the back
//             if (arr[j] < arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         if (!swapped) break; // Optimization if array is already sorted
//     }

//      cout<<"Sorted array in Decreasing Order: ";
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout<< arr[i] << " ";
//     }
//     cout<<endl;
//     return 0;
    
// }


// Q2.


// #include<iostream>
// using namespace std;


// int main() {
//      int arr[1000];
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     cout<<"Enter the element in array: ";
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin>>arr[i];
//     }

//     for (int i = 0; i < n - 1; i++) {
//         bool swapped = false;
//         // Start from the last element and move towards the unsorted boundary 'i'
//         for (int j = n - 1; j > i; j--) {
//             // Compare the current element with the one before it
//             if (arr[j] < arr[j - 1]) {
//                 swap(arr[j], arr[j - 1]);
//                 swapped = true;
//             }
//         }
//         if (!swapped) break;
//     }
//      cout<<"Sorted array in increasing Order: ";
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout<< arr[i] << " ";
//     }
//     cout<<endl;
//     return 0;
    
// }



// Q3.

#include<iostream>
using namespace std;


int main() {
     int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element in array: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            // Compares the ASCII values of the characters
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }


     cout<<"Sorted array in increasing Order: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<< arr[i] << " ";
    }
    cout<<endl;
    return 0;
    
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]= {1,2,3,4,5};
//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]= {1,2,3,4,5,6};
//     for (int i = 0; i < 6; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6]= {1,2,3};
//     for (int i = 0; i < 6; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6]= {0};
//     for (int i = 0; i < 6; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6];
//     for (int i = 0; i<6; i++)
//     cin>>arr[i];

//     for (int i = 0; i<6; i++)
//     cout<<arr[i]<<" ";

//     return 0; 
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cin>>size;
//     int arr[1000];
//     for (int i = 0; i<6; i++)
//     cin>>arr[i];

//     for (int i = 0; i<6; i++)
//     cout<<arr[i]<<" ";

//     return 0; 
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     cout<<arr[5]; // Out of the bound

//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     cout<<sizeof(arr)<<" "; // Size of Array

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     cout<<sizeof(arr)/sizeof(arr[0])<<" "; //Size oof Array = Number of elements

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {2,3,1,7,8}; 
//     // int a;  // size of int
//     // char a;    // size of char
//     // float a ; // size of float
//     double a; // size of double
//     cout<<sizeof(a)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {2,3,1,7,8}; 
//     cout<<sizeof(arr)<<endl; // size of array
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {2,3,1,7,8}; 
//     cout<<sizeof(arr)/sizeof(arr[0])<<endl; // Number of elements in an array
//     return 0;
// }

// Minimum Element

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {2,3,1,7,8};
//     int ans = INT_MAX;
//     // Min value
//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         if(arr[i]<ans)
//         ans = arr[i];
//     }

//     cout<<ans;
//     return 0;
    
// }



// #include<iostream>
// #include<climits> // 1. Added header for INT_MAX
// using namespace std;

// int main()
// {
//     int arr[5] = {2,3,1,7,8};
//     int ans = INT_MAX; //Finding minimum value from array by comparing to maximum number in an array
    
//     // Min value
//     for (int i = 0; i < 5; i++)
//     {
//         if(arr[i]<ans)
//             ans = arr[i]; // 2. Fixed '==' to '='
//     }
    
//     cout<<ans<<endl;

//     ans = INT_MIN; //Finding maximum value from array by comparing to maximum number in an array
//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         if(arr[i]>ans)
//         ans = arr[i];
//     }

//     cout<<ans<<endl;
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // The number of elements
//     int arr[5] = {2, 4, 6, 8, 10}; 
    
//     int sum = 0; // 1. Initialize a variable to store the sum
    
//     // 2. Loop through each element in the array
//     for (int i = 0; i < n; i++) {
//         sum = sum + arr[i]; // 3. Add the current element to the sum
//         // Note: You can also write this as: sum += arr[i];
//     }
    
//     cout << "The total sum is: " << sum;
    
//     return 0;
// }

// Homework

// Q1
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[20];
//     int sum = 0;
    
//     cout<<"Enter 20 elements: ";
//     for (int i = 0; i < 20; i++)
//     {
//         /* code */
//         cin >> arr[i];
//         sum = sum + arr[i];
//     }

//     cout<< "The sum of the elements is: "<< sum << endl;
//     return 0;
// }

// Q2
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[18];
//     int sum = 0;

//     cout<<"Enter 18 elements: ";
//     for (int i = 0; i < 18; i++)
//     {
//         /* code */
//         cin>>arr[i];
//         sum = sum + arr[i];
//     }
//     float average = (float)sum/18;

//     cout<<"The average is: "<< average<<endl;
//     return 0;
// }

// Q3
// #include <iostream>
// using namespace std;

// int main() {
//     int n, target;
//     cout << "enter the size of the array: ";
//     cin>> n;
    
 
//     int arr[n];
//     cout<<"Enter "<<n<<" elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin>>arr[i];
//     }
    

//     cout<< "Enter the elements to find: ";
//     cin>>target;
    
//     int index = -1;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if (arr[i] == target) {
//             index = i;
//             break;
//         }
//     }
    
//     cout<<"Index: "<< index << endl;
//     return 0;
// }

// Q4.
// #include <iostream>
// using namespace std;

// int main() {
//     char arr[26];
    
//     // Store characters by adding 'i' to the base character 'a'
//     for (int i = 0; i < 26; i++)
//     {
//         /* code */
//         arr[i] = 'a' + i;
//     }

//     cout<<"The alphabet array: ";
//     for (int i = 0; i < 26; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// Q5 and // Q6 with Sorting Q is solved
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size (n > 3): ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " unique elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Sort the array in ascending order (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap purely using a temporary variable
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    cout << "The third smallest element is: " << arr[2] << endl;
    cout << "The second largest element is: " << arr[n - 2] << endl;
    
    return 0;
}

// Q7

// What is Byte Addressable?
// In computer science, memory is basically a massive grid of storage cells. Byte-addressable memory means that the computer assigns a unique memory address to every single byte (8 bits) of data.

// The Concept: Even if a computer processes data in larger chunks (like 32-bit or 64-bit blocks), a byte-addressable system ensures that the smallest unit you can individually point to and access is 1 byte.

// How it applies to C++: When you declare an int array, each integer typically takes up 4 bytes of memory. If arr[0] starts at memory address 100, the next four individual byte addresses (100, 1001, 1002, 1003) are all consumed by that single integer. Because the memory is byte-addressable, arr[1] will perfectly start at address 1004.
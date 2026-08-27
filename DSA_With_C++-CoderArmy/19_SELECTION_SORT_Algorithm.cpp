// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6] = {10,4,1,3,2,7};

//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         int index = i;
//         for (int j = i + 1; j < 6; j++)
//         {
//             /* code */
//             if(arr[j]<arr[index])
//             index=j;
//         }
//         swap(arr[i],arr[index]);
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[1000];
//     int n;
//     cout<<"Enter the size of arrays: ";
//     cin>>n; //size of array
//     cout<<"Enter the element in arrays: ";
//     for(int i=0; i<n; i++)
//     cin>>arr[i];

//     for (int i = 0; i < n-1; i++)
//     {
//         /* code */
//         int index = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             /* code */
//             if(arr[j]<arr[index])
//             index=j;
//         }
//         swap(arr[i],arr[index]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
// }

// Homework

// #include <iostream>
// #include <algorithm> // for std::swap
// using namespace std;

// #include<iostream>
// #include <algorithm>
// using namespace std;

// void selectionSortDecreasing(int arr[], int n){
//     for (int i = 0; i < n-1; i++){
//         int maxIndex = i; // Assume the first element is the max

//         // Find the actual maximum element in the unsorted array
//         for (int j = i +1; j < n; j++)
//         {
//             /* code */
//             if(arr[j] > arr[maxIndex]){
//                 maxIndex = j;
//             }
//         }

//         // Swap the found maximum element with the first element
//         swap(arr[i], arr[maxIndex]);
//     }

// }

// void printIntArray(int arr[], int n){
//     for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
//     cout<<endl;
// }

// int main() {
//     int arr1[] = { 25, 12, 22, 11, 555};
//     int n1 = sizeof(arr1)/ sizeof(arr1[0]);
//     cout<<"Original Array: "; printIntArray(arr1, n1);

//     selectionSortDecreasing(arr1, n1);

//     cout<<"Decreasing Order: "; printIntArray(arr1, n1);
//     return 0;
// }


// Q2.

// #include<iostream>
// #include <algorithm>
// using namespace std;


// void selectionSortHighestToLast(int arr[], int n){
//     // Loop from the last index down to 1
//     for (int i = n-1; i > 0; i--)
//     {
//         /* code */
//         int maxIndex = 0;

//         // Find the maximum element in the range [0...i]
//         for (int j = 1; j <= i; j++)
//         {
//             /* code */
//             if(arr[j] > arr[maxIndex]){
//                 maxIndex = j;
//             }
//         }

//         // Swap the found maximum element with the element of the unsorted part 
//         swap(arr[i], arr[maxIndex]);
//     }
    
// }

// int main()
// {
//     int arr2[] = {64, 25, 12, 22, 11};
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);

//     selectionSortHighestToLast(arr2, n2);

//     for(int i = 0; i <n2; i++) cout<< arr2[i] << " ";
//     cout<<endl;
//     return 0;
// }

// Q3.


#include <iostream>
#include <algorithm>
using namespace std;

void selectionSortChar(char arr[], int n){
    for(int i =0; i<n-1; i++){
        int minIndex = i;

        // Find the samllest chracters in the unsorted portion
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    
}

int main() {
    char arr3[] = {'z', 'b', 'x', 'a', 'c'};
    int n3 = sizeof(arr3)/ sizeof(arr3[0]);

    selectionSortChar(arr3, n3);

    for(int i = 0; i < n3; i++) cout<< arr3[i] << " ";
    cout<< endl;
    return 0;
}
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[1000];
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     for(int i = 0; i<n; i++)
//     cin>>arr[i];

//     for(int i=1; i<n; i++)
//     {
//         for(int j =i; j>0; j--)
//         {
//             if(arr[j]<arr[j-1])
//             swap(arr[j], arr[j-1]);
//             else
//             break;
//         }
//     }
    
//     for(int i =0; i<n; i++)
//     cout<<arr[i]<<" ";

// }

// H.w

// Q1

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[1000];
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     for(int i = 0; i<n; i++)
//     cin>>arr[i];

//     for(int i=1; i<n; i++)
//     {
//         for(int j =i; j>0; j--)
//         {
//             if(arr[j]>arr[j-1])
//             // swap(arr[j], arr[j-1]);
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j-1];
//                 arr[j-1] = temp;
//             }
//             else
//             break;
//         }
//     }
    
//     for(int i =0; i<n; i++)
//     cout<<arr[i]<<" ";

// }

// Q2

#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    for(int i=1; i<n; i--)
    {
        for(int j =n-1; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j], arr[j-1]);
            else                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
            break;
        }
    }
    
    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";

}
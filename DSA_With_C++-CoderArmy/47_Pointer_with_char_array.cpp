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

// H.W.
// vector, string - reference help
// int arr, char arr pointer ki help se

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


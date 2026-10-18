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

#include<iostream>
using namespace std;

void swapping(int p1, int p2) 
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
    cout<<&p1<<endl;
    cout<<&p2<<endl;
    cout<<p1<<" "<<p2<<endl;
}

int main()
{
    int first = 10, second = 20;
    cout<<&first<<endl;
    cout<<&second<<endl;
    swapping(first,second);
    cout<<first<<" "<<second;
}

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
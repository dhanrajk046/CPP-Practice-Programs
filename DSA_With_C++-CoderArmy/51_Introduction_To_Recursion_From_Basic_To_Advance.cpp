// #include<iostream>
// using namespace std;

// // void fun0(int n)
// // {
// //     cout<<"Happy Birthday\n";
// // }

// // void fun1(int n)
// // {
// //     cout<<n<<" days left for birthday\n";
// //     fun0(0);
// // }

// // void fun2(int n)
// // {
// //     cout<<n<<" days left for birthday\n";
// //     fun1(n-1);
// // }

// void fun3(int n)
// {
//     // Base Case
//     if(n==0)
//     {
//         cout<<"Happy Birthday\n";
//         return;
//     }
//     cout<<n<<" days left for birthday\n";
//     fun3(n-1);
// }


// int main()
// {
//     int n = 5;
//     // Iteration approach
//     // for(int i=n;i>0;i--)
//     // {
//     //     cout<<i<<" days left for birthday\n";
//     // }

//     // cout<<"Happy Birthday\n";

//     fun3(8);
//     // fun2(2);
//     // fun1(1);
//     // fun0(0);
// }


// Q1.
// #include<iostream>
// using namespace std;

// void print(int n)
// {
//     // Base case

//     if(n==1)
//     {
//         cout<<1<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     print(n-1);
// }

// int main()
// {
//     // Print n to 1
//     int n = 5;
//     // for(int i=n;i>0;i--)
//     // cout<<i<<endl;

//     print(n);

// }


// Q2.
#include<iostream>
using namespace std;

void print(int n)
{
    // Base case
    if(n==2)
    {
        cout<<2<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-2);
}

int main()
{
    // Print n to 1
    // Print even number n to 1
    int n = 10;
    print(10);

}
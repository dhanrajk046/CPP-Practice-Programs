// // #include<iostream>
// // using namespace std;

// // // void fun0(int n)
// // // {
// // //     cout<<"Happy Birthday\n";
// // // }

// // // void fun1(int n)
// // // {
// // //     cout<<n<<" days left for birthday\n";
// // //     fun0(0);
// // // }

// // // void fun2(int n)
// // // {
// // //     cout<<n<<" days left for birthday\n";
// // //     fun1(n-1);
// // // }

// // void fun3(int n)
// // {
// //     // Base Case
// //     if(n==0)
// //     {
// //         cout<<"Happy Birthday\n";
// //         return;
// //     }
// //     cout<<n<<" days left for birthday\n";
// //     fun3(n-1);
// // }


// // int main()
// // {
// //     int n = 5;
// //     // Iteration approach
// //     // for(int i=n;i>0;i--)
// //     // {
// //     //     cout<<i<<" days left for birthday\n";
// //     // }

// //     // cout<<"Happy Birthday\n";

// //     fun3(8);
// //     // fun2(2);
// //     // fun1(1);
// //     // fun0(0);
// // }


// // Q1.
// // #include<iostream>
// // using namespace std;

// // void print(int n)
// // {
// //     // Base case

// //     if(n==1)
// //     {
// //         cout<<1<<endl;
// //         return;
// //     }
// //     cout<<n<<endl;
// //     print(n-1);
// // }

// // int main()
// // {
// //     // Print n to 1
// //     int n = 5;
// //     // for(int i=n;i>0;i--)
// //     // cout<<i<<endl;

// //     print(n);

// // }


// // Q2.
// #include<iostream>
// using namespace std;

// void print(int n)
// {
//     // Base case
//     if(n==2)
//     {
//         cout<<2<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     print(n-2);
// }

// int main()
// {
//     // Print n to 1
//     // Print even number n to 1
//     int n = 10;
//     print(10);

// }

// Homework

// 1. Print “Coder Army” 10 times using recursion


// #include<iostream>
// using namespace std;

// void printCoderArmy(int n) {
//     // Base case: stop when n reaches 0
//     if (n == 0) return;

//     cout<<"CoderArmy"<<endl;

//     // Recursive call with n - 1
//     printCoderArmy(n-1);
// }

// int main() {
//     printCoderArmy(10);
//     return 0;
// }


// 2. Print all odd numbers from n to 1 using recursion

// #include<iostream>
// using namespace std;

// void printOdd(int n) {
//     // Base case: stop when n drops below 1
//     if(n<1) return;

//     // Print if n is odd
//     if(n%2!=0) {
//         cout<<n<<" ";
//     }
//     //Recursive call
//     printOdd(n-1);
// }
// int main() {
//     int n = 10;
//     printOdd(n);   // Output for n = 10: 9 7 5 3 1
//     return 0;
// }

// 3. Print all numbers from 1 to n using recursion
// To print from 1 to n, use head recursion (making the recursive call before printing so numbers print on the way back up the call stack).

#include<iostream>
using namespace std;

void print1ToN(int n) {
    // Base case: stop when n reaches 0
    if(n == 0) return;

    // Recursive call first
    print1ToN(n-1);

    // Print on the way back
    cout<<n<<" ";
}

int main() {
    int n = 10;
    print1ToN(n);   // Output for n = 10: 1 2 3 4 5 6 7 8 9 10
    return 0;
}
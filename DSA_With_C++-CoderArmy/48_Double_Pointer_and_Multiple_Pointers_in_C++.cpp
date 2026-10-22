#include<iostream>
using namespace std;

// void fun(int **p1)
// {
//     // *p = *p+10;
//     // p1++;
//     *p1 = *p1 + 1;
// }

// int main()
// {
//     int n = 10;
//     int *p = &n; //single pointer
//     int **p2 = &p; // Doble pointer

//     // int ***p3 = &p2; // Triple pointer
//     // // cout<<p<<endl;
//     // // cout<<&p<<endl;
//     // // cout<<p2<<endl;
//     // // cout<<&p2<<endl;
//     // // cout<<p3<<endl;

//     // // Value ko modify karna ho, jo n mein rakhi hai...
//     // // *p = *p+5;
//     // // cout<<n<<endl;
//     // ***p3 = ***p3+10;
//     // cout<<n<<endl;
    
//     cout<<p<<endl;
//     fun(p2);
//     cout<<p<<endl;

// }

// Q1

// int main()
// {
//     char c[] = "GATE2024";
//     char *p = c;
//     cout<<p+p[3]-p[1];
//     cout<<endl;
// }


// Q2

// void second(int *p1, int *p2)
// {
//     p1 = p2;
//     *p1 = 2;
// }

// int main()
// {
//     int i = 0, j = 1;
//     second(&i,&j);
//     cout<<i<<" "<<j<<endl;
// }

// Q3

// int main()
// {
//     int *ptr;
//     int x=0;
//     ptr=&x;
//     int y=*ptr;
//     *ptr=1;
//     cout<<x<<" "<<y<<endl;
// }

// Q4

// int main()
// {
//     int a = 5, b = 10;
//     int &name = a;
//     int *ptr = &a;
//     (*ptr)++;
//     ptr = &b;
//     *ptr = *ptr+5;
//     name+=5;
//     cout<<a<<" "<<b;
// }

// Q5

// int four(int x, int *py, int **ppz)
// {
//     int y,z;
//     **ppz+=1; z=**ppz;
//     *py+=2; y=*py;
//     x+=3;
//     return x+y+z;
// }

// int main()
// {
//     int c, *b, **a;
//     c=4, b=&c, a=&b;
//     cout<<four(c,b,a);
// }

// Q6

// void five(char *str1, char *str2)
// {
//     while(*str1=*str2)
//     {
//         str1++,str2++;
//     }
// }

// int main()
// {
//     char first[] = "Mohit";
//     char second[] = "Rohan";
//     five(first, second);
//     cout<<first;
//     return 0;

// }

// Address of p

int main()
{
    int n = 10;
    int *p = &n;
    int **q = &p;
    cout<<p<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                
}
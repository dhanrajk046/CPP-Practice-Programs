#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int *p = &n; //single pointer
    int **p2 = &p; // Doble pointer
    int ***p3 = &p2; // Triple pointer
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<p2<<endl;
    // cout<<&p2<<endl;
    // cout<<p3<<endl;

    // Value ko modify karna ho, jo n mein rakhi hai...
    // *p = *p+5;
    // cout<<n<<endl;
    ***p3 = ***p3+10;
    cout<<n<<endl;

}
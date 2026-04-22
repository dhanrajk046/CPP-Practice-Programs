// Find the largest of three numbers
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter b number: ";
    cin >> b;
    cout << "Enter c number: ";
    cin >> c;

    if (a >= b && a >= c)
        cout << "Largest: " << a;
    else if (b >= a && b >= c)
        cout << "Largest: " << b;
    else 
        cout << "Largest: " << c;

    return 0;
}
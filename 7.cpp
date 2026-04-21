//Check whether a number is an Armstrong number (e.g., 153 → 1³ + 5³ + 3³ = 153)
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,original, remainder, result=0, n=0;

    cout<<"Enter a number: ";
    cin>>num;

    original = num;

    //count digits
    while (original != 0){
        original /= 10;
        n++;
    }

    original = num;

    //Calculate armstrong sum
    while (original != 0){
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num)
        cout<<"Armstrong number";
    else
        cout<<"Not armstrong number";
    
    return 0;
}
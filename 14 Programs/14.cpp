//Q4 of interviewbit solved
#include<iostream>
#include<cmath>
using namespace std;

int main()  {
    float A = 12.56, B = 5.12, Number_1, Number_2;
    float cube_val;
    float sq_val;
    // Print the sum of cube of both A and B, and store it in float variable named "cube_val"
    Number_1 = pow(A,3);
    //  cout << cbrt(A) << endl;
    // prints -0.550686
    Number_2 = pow(B,3);
    cube_val = Number_1 + Number_2;
    cout<<cube_val<<endl;
    
    // Print the square root of cube_val, and store it in float variable named "sq_val"
    sq_val = sqrt(cube_val);
    cout<<sq_val<<endl;
    
    // Print the sin of sq_val
    cout << sin(sq_val) << endl;
    return 0;
}
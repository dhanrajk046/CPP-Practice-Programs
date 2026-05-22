#include <iostream>
using namespace std;

int main()
{
    // int num;
    // cout << "Enter the number: ";
    // cin >> num;
    // int rem, ans = 0, mul = 1;

    // while (num > 0)
    // {
    //     // reminder
    //     // rem = num % 2;
    //     rem = num&1;
    //     // quotient
    //     // num = num / 2;
    //     num = num>>1;
    //     // ans
    //     ans += rem * mul;
    //     // mul
    //     mul *= 10;
    // }
    // cout << ans << endl;

    // int num;
    // cout << "Enter the number: ";
    // cin >> num;
    // int mul = 1, ans = 0, rem;

    // while (num)
    // {
    //     // remainder
    //     rem = num % 10;
    //     // num ko divide kaar do
    //     num = num / 10;

    //     // ans
    //     ans = mul * rem + ans;

    //     // mul
    //     mul *= 2;
    // }
    // cout << ans << endl;

    // H.W.
    // Q1
    //  int binary, rem;
    //  int ans = 0;
    //  int power = 1;

    // cout<<"Enter binary number: ";
    // cin>>binary;

    // while (binary > 0)
    // {
    //     /* code */
    //     rem = binary % 10;
    //     ans = ans + rem * power;
    //     power =power*2;
    //     binary = binary/10;
    // }
    // cout<<"Decimal number: "<<ans;

    // Q2
    //  int n, rem;
    //  int ans = 0;
    //  int mul = 1;

    // cout<<"Enter decimal number: ";
    // cin>>n;

    // while (n>0)
    // {
    //     /* code */
    //     rem = n %2;
    //     ans = rem * mul +ans;
    //     mul = mul *10;
    //     n = n/2;
    // }
    // cout<<"Binary number: "<<ans;

    // Q3
    // int n, rem;
    // int ans = 0;
    // int mul = 1;

    // cout << "Enter decimal number: ";
    // cin>>n;
    
    // while (n>0)
    // {
    //     /* code */
    //     rem = n%8;
    //     ans = rem *mul +ans;
    //     mul = mul *10;
    //     n = n/8;
    // }
    // cout<<"Octal number: "<<ans;

    //Q4
    // int octal, rem;
    // int ans = 0;
    // int power = 1;

    // cout << "Enter octal number: ";
    // cin>>octal;
    
    // while (octal>0)
    // {
    //     /* code */
    //     rem = octal%10;
    //     ans = rem *power +ans;
    //     power = power *8;
    //     octal = octal/10;
    // }
    // cout<<"Decimal number: "<<ans;

    //Q5
    // int binary, rem;
    // int decimal = 0;
    // int power = 1;

    // cout<<"Enter binary number: ";
    // cin>>binary;

    // //Binary to Decimal
    // while (binary>0)
    // {
    //     /* code */
    //     rem=binary%10;
    //     decimal = decimal + rem *power;
    //     power = power*2;
    //     binary = binary/10;
    // }
    
    // //Decimal to Octal
    // int octal = 0;
    // int mul = 1;

    // while (decimal > 0)
    // {
    //     /* code */
    //     rem = decimal % 8;
    //     octal = rem *mul+octal;
    //     mul = mul *10;
    //     decimal = decimal/8;
    // }
    // cout<<"Octal number: "<<octal;\

    //Q6
    int octal, rem;
    int decimal = 0;
    int power = 1;

    cout<<"Enter octal number: ";
    cin>>octal;

    //Octal to Decimal
    while (octal>0)
    {
        /* code */
        rem = octal % 10;
        decimal = decimal + rem * power;
        power =power * 8;
        octal =octal /10;
    }

    //Decimal to Binary
    int binary = 0;
    int mul = 1;

    while (decimal > 0)
    {
        /* code */
        rem = decimal %2;
        binary = rem * mul + binary;
        mul = mul * 10;
        decimal = decimal / 2;
    }
    cout<<"Binary number: "<< binary;
    
    return 0;
}
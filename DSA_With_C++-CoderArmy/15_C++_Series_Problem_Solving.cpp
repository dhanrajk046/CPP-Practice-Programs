// #include<iostream>
// using namespace std;

// Q1. Convert 'a' to 'A'
// char convert(char name)
// {
//     char ans = name-'a'+'A';
//     return ans;
// }

// int main()
// {
//     char name;
//     cin>>name;

//     cout<<convert(name)<<endl;

//     return 0;
// }


// Q2. Armstrong Number

#include<iostream>
#include <cmath>
using namespace std;

// Count Number of Digits
int countdigit(int n)
{
    if(n==0)
    return 1;

    int count=0;

    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}

// bool Armstrong(int num, int digit)
// {
//     int n=num, ans=0, rem;
//     while(n)
//     {
//         rem = n%10;
//         n/=10;
//         // ans = ans+pow(rem, digit);
//         ans = ans + round(pow(rem, digit));
//     }

//     if (ans == num)
//         return 1;
//     else
//         return 0;
// }

void Armstrong(int num, int digit)
{
    int n=num, ans=0, rem;
    while(n)
    {
        rem = n%10;
        n/=10;
        // ans = ans+pow(rem, digit);
        ans = ans + round(pow(rem, digit));
    }

    if(ans == num)
    cout<<1;
    else
    cout<<0;
}


// bool Armstrong(int num, int digit)
// {
//     int n = num, ans = 0, rem;

//     cout << "digit = " << digit << endl;

//     while(n)
//     {
//         rem = n % 10;
//         n /= 10;

//         cout << "rem = " << rem << endl;
//         cout << "pow = " << pow(rem, digit) << endl;

//         ans = ans + pow(rem, digit);

//         cout << "ans = " << ans << endl;
//     }

//     cout << "final ans = " << ans << endl;
//     cout << "num = " << num << endl;

//     if(ans == num)
//         return 1;
//     else
//         return 0;
// }

int main()
{
    int num;
    cin >> num;

    // Count digit
    int digit = countdigit(num);

    // Armstrong number
    Armstrong(num,digit);

    // return 0;
}


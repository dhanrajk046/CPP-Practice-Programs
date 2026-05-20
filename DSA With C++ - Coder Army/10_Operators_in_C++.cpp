#include <iostream>
using namespace std;

int main()
{
    // cout<<13.8/2;

    // int a=10;
    // int b=++a;

    // int a=10;
    // int b=a++;

    // int a=10;
    // int b=a--;

    // int a=10;
    // int b=--a;
    // cout<<b<<" "<<a;

    // return 0;

    // comparison operator

    // 1 or 0

    // int a,b;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;

    // // if(a==b)
    // // cout<<"Yes";
    // // else
    // // cout<<"No";

    // // >, <, >=, <=, !=

    // if(a!=b)
    // cout<<"Yes";
    // else
    // cout<<"No";

    // Logical Operator

    // int a,b,c;
    // cin>>a>>b>>c;

    // if (a>b && a>c)
    // cout<<"Yes";
    // else
    // cout<<"No";

    // or

    // char name = 'b';

    // if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
    // cout<<"Vowel";
    // else
    // cout<<"consonant";

    // cout<<!28<<endl;

    // bitwise Operator

    //& Operator, |, ^, <<, >>, ~
    // int ans= ~5;
    // cout<<"My answer is : "<<ans<<endl;

    // Assignment operator

    // int a = 10;
    // a+=15; //a=a+15
    // cout<<a;

    // if(8>5>6>9*4)
    // cout<<"Yes";
    // else
    // cout<<"No";

    // Day 10
    // Q1.
    //  int col, row;
    //  int n;
    //  cout<<"Enter the input: ";
    //  cin>>n;

    // for ( row = 1; row <= n; row=row+1)
    // {
    //     /* code */
    //     for ( col = 1; col <= n-row; col=col+1)
    //     {
    //         /* code */
    //         cout<<"  ";
    //     }
    //     for (col = n; col >= n-row+1; col=col-1)
    //     {
    //         /* code */
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;

    // }

    // Q2.
    // {
    //     int row, col;
    //     int n;

    //     cout << "Enter the input: ";
    //     cin >> n;

    //     for (row = 1; row <= n; row = row + 1)
    //     {
    //         // Print spaces
    //         for (col = 1; col <= n - row; col = col + 1)
    //         {
    //             cout << "  ";
    //         }

    //         // Print characters
    //         char name = 'A' + row - 1;

    //         for (col = 1; col <= row; col = col + 1)
    //         {
    //             cout << name << " ";
    //         }

    //         cout << endl;
    //     }

    //     return 0;
    // }

    // Q3

    // {
    //     int row, col;
    //     int n;

    //     cout << "Enter the input: ";
    //     cin >> n;

    //     for (row = 1; row <= n; row = row + 1)
    //     {
    //         // Print spaces
    //         for (col = 1; col <= n - row; col = col + 1)
    //         {
    //             cout << "  ";
    //         }

    //         for( col =5; col>=5-row+1;col=col-1)
    //         {
    //         cout<<col<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // Q4
    // {
    //     int row, col;
    //     int n;

    //     cout << "Enter the input: ";
    //     cin >> n;

    //     for (row = 1; row <= n; row = row + 1)
    //     {
    //         // Print spaces
    //         for (col = 1; col <= n - row; col = col + 1)
    //         {
    //             cout << "  ";
    //         }

    //         // Print characters
    //         // char name = 'E' + row - 1;

    //         for (char name = 'E'; name >= 'E'-row+1; name = name -1)
    //         {
    //             cout << name << " ";
    //         }

    //         cout << endl;
    //     }

    //     return 0;
    // }

    // Day 11
    //  Q1
    //  {
    //      int row, col;
    //      int n;

    //     cout << "Enter the input: ";
    //     cin >> n;

    //     for (row = 1; row <= n; row = row + 1)
    //     {
    //         // Print spaces
    //         for (col = 1; col <= n - row; col = col + 1)
    //         {
    //             cout << " ";
    //         }

    //         // Print characters
    //         // char name = 'E' + row - 1;

    //         for (col =1; col <= row; col=col+1)
    //         {
    //             cout <<"* ";
    //         }

    //         cout << endl;
    //     }
    // }

    // Q2

    // int row, col;
    // int n;

    // cout << "Input the number: ";
    // cin >> n;

    // for (row = 1; row <= n; row = row + 1)
    // {
    //     for (col = 1; col <= n - row; col = col + 1)
    //         cout << "  ";

    //     for (col = 1; col <= row; col = col + 1)
    //             cout <<col<< " ";

    //     for (col = row+1; col <= 2*row-1; col = col + 1)
    //             cout <<col<< " ";

    //     cout << endl;

    // }

    // Q3
    // {
    //     int row, col;
    //     int n;

    //     cout << "Enter the input: ";
    //     cin >> n;

    //     for (row = 1; row <= n; row = row + 1)
    //     {
    //         // Print spaces
    //         for (col = 1; col <= n - row; col = col + 1)
    //         {
    //             cout << "  ";
    //         }

    //         // Print characters
    //         char name = 'A' + row - 1;
    //         {

    //         for (char name = 'A'; name <= 'A'+row-1; name = name + 1)
    //         {
    //             cout << name << " ";
    //         }

    //         for ( char name = 'A'+row-2; name >='A'; name = name -1)
    //         {
    //             /* code */
    //             cout<<name<<" ";
    //         }

    //         cout << endl;
    //         }

    // for (col = 1; col <= row; col = col + 1)
    // {
    //     cout << col << " ";
    // }

    // for (col = row + 1; col <= 2 * row - 1; col = col + 1)
    // {
    //     /* code */
    //     cout << col << " ";
    // }
    // cout << endl;

    // Q4
    // int row, col;
    // int n;

    // cout << "Input the number: ";
    // cin >> n;

    // for (row = 1; row <= n; row = row + 1)
    // {
    //     for (col = 1; col <= n - row; col = col + 1)
    //         cout << " ";

    //     for (col = 1; col <= row; col = col + 1)
    //         cout << "* ";

    //     cout << endl;
    // }

    // for (row = n; row >= 1; row = row - 1)
    // {
    //     for (col = 1; col <= n - row; col = col + 1)
    //         cout << " ";

    //     for (col = 1; col <= row; col = col + 1)
    //         cout << "* ";

    //     cout << endl;
    // }

    // Day -12
    // Q1
    //  int temp;
    //  cout<<"Enter the temprature: ";
    //  cin>>temp;

    // if (temp>70 && temp<90)
    //     cout<<"Yes";
    // else
    //     cout<<"No";

    // Q2
    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;

    // if (num%2==0 && num>0)
    // cout<<"YES";
    // else
    // cout<<"No";

    // Q3
    //  int age;
    //  cout<<"Enter the age: ";
    //  cin>>age;

    // if (age>=13 && age<=19)
    // cout<<"This person is a teenager.";
    // else
    // cout<<"This person is not a teenager.";

    // Q4
    //  int a,b,c;
    //  cout<<"Enter the value of a: ";
    //  cin>>a;
    //  cout<<"Enter the value of b: ";
    //  cin>>b;
    //  cout<<"Enter the value of c: ";
    //  cin>>c;

    // if (a>b && a>c)
    // cout<<"yes";
    // else
    // cout<<"No";

    //Q5
    // 1.
    // cout<<(2*3-48==5/4*6);
    
    //2.
    // cout<<(6<<2-4*8/2);
    //  cout << (6 << 2);

    //3.
    // cout<<(5>4<3/2-8%4+5);

    //4.
    // cout<<(14-8+92>>2+70);
    cout << ((14 - 8 + 92) >> 2);
    return 0;
}

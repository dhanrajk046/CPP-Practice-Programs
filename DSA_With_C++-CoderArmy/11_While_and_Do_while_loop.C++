#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // int i=1; //Break

    // while(i<=n)
    // {
    //     cout<<i<<endl;
    //     i++; //update
    // }

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // int i=1; //Break

    // while(i<=10)
    // {
    //     cout<<i*n<<endl;
    //     i++; //update
    // }

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // int i=1; //initialize

    // do{
    //     cout<<n*i<<endl;
    //     i++; // update
    // }while(i<=10); // break

    // Break,Continue

    // for (int i = 0; i <= 100; i++)
    // {
    //     /* code */
    //     if(i%4==0)
    //     continue;

    //     cout<<i<<" ";
    // }

    // int i;
    // cout<<"Enter the number: ";
    // cin>>i;

    // switch (i)
    // {
    // case 1:
    //     /* code */
    //     cout<<"Rohit";
    //     break;

    // case 2:
    //     cout<<"Mohit";
    //     break;

    // default:
    // cout<<"Sohit";
    // }

    // int i;
    // cout << "Enter the number: ";
    // cin >> i;

    // switch (i)
    // {
    // case 1:
    //     /* code */
    //     cout << "Mon";
    //     break;

    // case 2:
    //     cout << "Tue";
    //     break;

    // case 3:
    //     cout << "Wed";
    //     break;

    // case 4:
    //     cout << "Thur";
    //     break;

    // case 5:
    //     cout << "Fri";
    //     break;

    // case 7:
    //     cout << "Sat";
    //     break;

    // case 7:
    //     cout << "Sun";
    //     break;

    // }

    // int n = 10;

    // cout<<n;

    // int n = 30;

    // cout<<n;

    // int n = 10;
    // int i = 30;

    // if(i==30)
    // {
    //     int n =30;
    //     cout<<n;
    // }

    // int n =10;
    // int i=20;

    // for (i=10; i <= 30; i++)
    // {
    //     /* code */
    //     cout<<i<<" ";
    // }

    // H.W
    // Q1
    //  int n;
    //  cout<<"Enter the number: ";
    //  cin>>n;
    //  int i=1; //Break

    // while(i<=n)
    // {
    //     if(i%2==0)
    //     cout<<i<<endl;
    //     i++; //update
    // }

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int i = 1; // Break

    // do{
    //     if (i % 2 == 0)
    //     cout << i << endl;
    //     i++; // update
    // } while(i<=n);
    // return 0;

    // Q2
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int i = 1; // Break

    // while (i <= n)
    // {
    //     if (n % i == 0)
    //         cout << i << endl;
    //     i++; // update
    // }

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int i = 1; // Break

    // do{
    //     if (n % i == 0)
    //     cout << i << endl;
    //     i++; // update
    // } while(i<=n);
    // return 0;

    // Q3
    //  int n;
    //  cout << "Enter the number: ";
    //  cin >> n;
    //  int i = 1; // Break

    // while(i<=n){
    //     if (i % 3 == 0 || i % 5 == 0)
    //     {
    //         i++;
    //         continue;
    //     }
    //     cout << i << " ";
    //     i++; // update
    // }
    // return 0;

    // Q4

    // int i;
    // cout << "Enter the number: ";
    // cin >> i;

    // switch (i)
    // {
    // case 1:
    //     /* code */
    //     cout << "Jan";
    //     break;

    // case 2:
    //     cout << "Feb";
    //     break;

    // case 3:
    //     cout << "March";
    //     break;

    // case 4:
    //     cout << "April";
    //     break;

    // case 5:
    //     cout << "May";
    //     break;

    // case 6:
    //     cout << "June";
    //     break;

    // case 7:
    //     cout << "July";
    //     break;

    // case 8:
    //     cout << "Aug";
    //     break;

    // case 9:
    //     cout << "Sept";
    //     break;

    // case 10:
    //     cout << "Oct";
    //     break;

    // case 11:
    //     cout << "Nov";
    //     break;

    // case 12:
    //     cout << "Dec";
    //     break;
    // }
    // return 0;

    // Q5
    //  char ch = 'A';

    // while(ch <= 'Z'){
    //     cout<<ch<<" ";
    //     ch++;
    // }

    // cout<<endl;
    // ch='a';

    // while(ch <= 'z'){
    //     cout<<ch<<" ";
    //     ch++;
    // }

    // return 0;

    // Q6
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 2; // Break

    if(n<2){
        cout<<"Not Prime";
        return 0;
    }
    while (i < n)
    {
        if (n % i == 0)
        {
            cout<<"Not Prime";
            break;
        }
        i++; // update
    }

    if(i==n){
        cout<<"Prime";
    }
    return 0;
}
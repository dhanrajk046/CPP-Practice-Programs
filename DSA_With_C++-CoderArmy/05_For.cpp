#include<iostream>
using namespace std;

int main(){
    // int i;
    // for(i=101;i<=200;i++)
    // cout<<i<<endl;
    // return 0;

    // char name;
    // for(name = 'a';name<='z'; name = name+1)
    // {
    //     cout<<name<<" ";
    // }

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // for (int i=n; i >=1 ; i=i-1)
    // {
    //     /* code */
    //     cout<<i<<" ";
    // }

    // int i;
    // for ( i = 1; i < 100; i = i+3)
    // {
    //     /* code */
    //     cout<<i<<" ";
    // }

    // int n,i;
    // cout<<"Enter the table: ";
    // cin>>n;

    // for(i=1;i<=10;i=i+1)
    // {
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;                                                                                                                                                                                                                                                                                                                                      
    // }

    // int n,pow,i, num;
    // cout<<"Enter the number: ";
    // cin>>n;
    // cout<<"Enter the power: ";
    // cin>>pow;

    // num = n;
    // for(i=1;i<pow;i=i+1)
    // {
    //     num=num*n;
    // }

    // cout<<num;

    // int n, i,sum = 0;
    // cout<<"Enter the number: ";
    // cin>>n;

    // for ( i = 1; i <= n; i=i+1)
    // {
    //     /* code */
    //     sum = sum+i;
    // }
    // cout<<sum;
    
    // int n, i,sum = 0;
    // cout<<"Enter the number: ";
    // cin>>n;

    //     /* code */
    //     cout<<(n*(n+1))/2;

    //int n, fact =1, i;
    // cout<<"Enter the number: ";
    // cin>>n;

    // for (i = 1; i <=n; i=i+1)
    // {
    //     /* code */
    //     fact = fact*i;
    // }
    // cout<<fact;

    // int n,i;
    // cout<<"Enter the number: ";
    // cin>>n;

    // if(n<2)
    // {
    //     cout<<"Not a prime number";
    //     return 0;
    // }
    // else
    // {
    //     for ( i = 2; i < n; i=i+1)
    //     {
    //         /* code */
    //         if(n%i==0)
    //         {
    //             cout<<"Not a prime number";
    //             return 0;
    //         }
    //     }

    //     cout<<"Prime number";
    //     return 0;
        
    // }
    
    // return 0;

    // H.W

    // Q1
    
    // int i;
    // // cout<<"Enter the number: ";
    // // cin>>n;

    // for ( i = 280; i >= 250; i=i-1)
    // cout<<i<<endl;
    // return 0;
    
    // Q2

    // char name;
    // for ( name = 'A'; name <= 'Z'; name =name+1)
    // {
    //     /* code */
    //     cout<<name<<endl;
    // }

    // Q3

    // char name;
    // for ( name = 'Z'; name >= 'A'; name =name-1)
    // {
    //     /* code */
    //     cout<<name<<endl;
    // }
    
    // Q4

    // int i;
    // for(i=220; i<=730; i=i+7)
    // cout<<i<<endl;
    // return 0;
    
    // Q5
    // int n, i;
    // cout<<"Enter the number: ";
    // cin>>n;

    // int sum = 0;
    
    // for ( i = 1; i <=n; i++)
    // {
    //     /* code */
    //     sum = sum +(i*i);
    // }
    // cout<<"Sum of Squares = "<<sum;
    // return 0;
    

    // Q6
    // int n, i;
    // cout<<"Enter the number: ";
    // cin>>n;

    // int sum = 0;
    
    // for ( i = 1; i <=n; i++)
    // {
    //     /* code */
    //     sum = sum +(i*i*i);
    // }
    // cout<<"Sum of cubes = "<<sum;
    // return 0;
    

    // Q7
    int n;
    cout<<"Enter the number of upto Fibonacci Number is required: ";
    cin>>n;

    int a=0, b=1, c;

    if(n ==0){
        cout<<a;
    }
    else if(n==1){
        cout<<b;
    }
    else{
        for(int i =2; i<= n; i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<b;
    }
    return 0;

}
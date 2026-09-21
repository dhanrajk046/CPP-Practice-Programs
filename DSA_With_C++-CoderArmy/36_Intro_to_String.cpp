#include<iostream>
using namespace std;

int main()
{ 
    // char arr[] = {'a','p','p','l','e'};
    // for(int i=0; i<5; i++)
    // cout<<arr[i];

    // char arr[10];
    // cin>>arr;
    // arr[2] ='\0';
    // cout<<arr;

    // string s;
    // getline(cin,s);
    // cout<<s<<endl;
    // cout<<s.size();

    // Append Operation
    // string s1 = "rohit", s2="mohit";
    // string s3 = s1+s2;
    // string s3 = s1.append(s2);
    // s1.push_back('p');
    // s1.pop_back();
    // s1 = s1+'p'; // Character
    // s1 = s1+"pa"; // String
    // string s = "Rohit Negi is a \"good\" boy";
    // string s = "\\0";
    // cout<<s;

    // Q1. Reverse the string

    string s = "rohit";
    //Reverse string
    
    int start = 0,end = s.size()-1;

    while(start<end)
    {
        swap(s[start],s[end]);
        start++,end--;
    }
    cout<<s;
    
    // Size of string
    int size = 0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout<<endl;
    cout<<size<<" ";

    string s2 = "namas ";
    start =0 , end = s2.size()-1;

    while(start<end)
    {
        if(s2[start]!=s2[end])
        {
            cout<<"Not a Palindrome";
            return 0;
        }
        start++, end--;
    }

    cout<<"It is a Palindrome: ";

}
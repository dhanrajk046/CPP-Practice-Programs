// #include<iostream>
// using namespace std;

// int main(){
    // int row,col;
    // int n;
    
    // cout<<"Input the number: ";
    // cin>>n;

    // for(row=1;row<=n;row=row+1)
    // {
    //     for(col=1;col<=n-row;col=col+1)
    //     cout<<"  ";

    //     for(col=1;col<=row;col=col+1)
    //     cout<<"* ";

    //     cout<<endl;
    // }
    

    // int row,col;
    // int n;
    
    // cout<<"Input the number: ";
    // cin>>n;

    // for(row=1;row<=n;row=row+1)
    // {
    //     for(col=1;col<=n-row;col=col+1)
    //     cout<<"  ";

    //     for(col=1;col<=row;col=col+1)
    //     cout<<row<<" ";

    //     cout<<endl;
    // }

    // int row,col;
    // int n;
    // cout<<"Enter the input: ";
    // cin>>n;

    // for ( row = 1; row <= n; row=row+1)
    // {
    //     /* space print */
    //     for (col = 1; col <= n-row; col=col+1)
    //     cout<<"  ";

    //     //Number print
    //     for (col = 1; col <= row; col=col+1)
    //     cout<<col<<" ";

    //     cout<<endl;
        
        
    // }

    // int row,col;
    // int n;

    // cout<<"Enter the input: ";
    // cin>>n;

    // for ( row= 1; row <=n; row=row+1)
    // {
    //     /* Space print */
    //     for ( col = 1; col <=n-row;col=col+1)
    //     cout<<"  ";

    //     /* Char print*/
    //     for (col = 1; col<=row; col=col+1)
    //     {

    //     char name = 'A'+col-1;
    //     cout<<name<<" ";
    //     }

    //     cout<<endl;
        
        
    // }

    // int row, col;
    // int n;

    // cout<<"Enter the input: ";
    // cin>>n;

    // for(row=1;row<=n;row=row+1)
    // {
    //     for(col=1;col<=n-row;col=col+1)
    //     {
    //         cout<<"  ";
    //     }
        
    //     for(col=1;col<=row;col=col+1)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }
    

    //H.W.

    //First Pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     for (int i = 1; i <=n; i++)
//     {
//         /* code */
//         for (int j = 1; j <= n-i; j++)
//         {
//             /* code */
//             cout<<"  ";
//         }

//         // Numbers
//         for (int j = i; j >= 1; j--)
//         {
//             /* code */
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
    
// }


// Q2. Second Pattern

// #include<iostream>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         /* code */
//         for (int j = 1; j <= n-i; j++)
//         {
//             /* code */
//             cout<<"  ";
//         }

//         // Characters
//         for (int j = 1; j <= i; j++)
//         {
//             /* code */
//             cout<< char('A' + i - 1) << " ";
//         }
//         cout<< endl;
//     }
//     return 0;
// }

// Q3. #include <iostream>

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         /* Spaces */
//         for (int j = 1; j <= n-i ; j++)
//         {
//             /* code */
//             cout<<"  ";
//         }

//         // Numbers
//         for (int j = n; j >=n-i+1; j--)
//         {
//             /* code */
//             cout<< j << " ";
//         }
//         cout<< endl;
//     }
//     return 0;
    
// }


// Q4. Fourth Pattern

//  #include<iostream>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         /* code */
//         for (int j = 1; j <= n-i; j++)
//         {
//             /* code */
//             cout<<"  ";
//         }

//         // Characters
//         for (int j = 0; j < i; j++)
//         {
//             /* code */
//             cout<< char('A' + n - 1 - j) << " ";
//         }
//         cout<< endl;
//     }
//     return 0;
// }


// Homework

// Q1. First Pattern

// #include<iostream>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         /* Space before stars*/
//         for (int j = 1; j <=n-i; j++)
//         {
//             /* code */
//             cout<<" ";
//         }

//         // Stars
//         for (int j = 1; j <= i; j++)
//         {
//             /* code */
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q2.Second Pattern

// #include<iostream>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         /* code */
//         for (int j = 1; j <= n-i; j++)
//         {
//             /* code */
//             cout<<"  ";
//         }

//         // Numbers
//         for (int  j = 1; j <= 2*i-1; j++)
//         {
//             /* code */
//             cout<<j<<" ";    
//         } 
//         cout<<endl;
//     }
//     return 0; 
// }



// Q3. Third Pattern
// #include<iostream>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;

//     for (int i = 1; i <=  n; i++)
//     {
//         /* Spaces */
//         for (int j = 1; j < n-i; j++)
//         {
//             /* code */
//             cout<<"  ";
//         }

//         // Increasing characters
//         for (int j = 1; j <= i; j++)
//         {
//             /* code */
//             cout<< char('A'+ j - 1)<<" ";
//         }

//         // Decreasing characters
//         for (int j = i-1; j >=1; j--)
//         {
//             /* code */
//             cout<< char('A'+ j - 1)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
        
        
// Q4. Fourth Pattern

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     // Upper half
//     for (int i = 1; i <= n; i++)
//     {
//         //Spaces
//         for (int j = 1; j <= n-i; j++)
//         {
//             /* code */
//             cout<<"  ";
//         }

//         // Stars
//         for (int j = 1; j <= i; j++)
//         {
//             /* code */
//             cout<<"* ";

//         }
//         cout<<endl;  
//     }

//     // Lower half
//     for (int i = n-1; i >= 1; i--)
//     {
//         /* Spaces */
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<"  ";
//         }

//         // Stars
//         for (int j = 1; j <= i; j++)
//         {
//             /* code */
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++)
    {
        // Spaces: Changed from "  " to " "
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;  
    }

    // Lower half
    // Changed starting point from n-1 to n to duplicate the middle row
    for (int i = n; i >= 1; i--)
    {
        // Spaces: Changed from "  " to " "
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
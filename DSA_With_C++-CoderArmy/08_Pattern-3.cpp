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

 #include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= n-i; j++)
        {
            /* code */
            cout<<"  ";
        }

        // Characters
        for (int j = 0; j < i; j++)
        {
            /* code */
            cout<< char('A' + n - 1 - j) << " ";
        }
        cout<< endl;
    }
    return 0;
}



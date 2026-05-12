#include <iostream>
using namespace std;

int main()
{
    // int row, col;

    // for(row=1; row<=5; row=row+1)
    // {
    //     for(col=1;col<=row;col=col+1)
    //     {
    
    //         cout<<"*"<<" ";
    //         // cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // int row, col;

    // for( row=2; row<=6; row=row+1)
    // {
    //     for(col=1; col<=row;col=col+1)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // int row, col;
    // {
    //     for (row = 1; row<=10; row=row+1)
    //     {
    //             /* code */
    //         for(col=1;col<=row;col=col+1)
    //         {
    //         cout<<row<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // int row, col;

    // for (row = 1; row <= 6; row=row+1)
    // {
    //     /* code */
    //     for (col = row; col >= 1; col=col-1)
    //     {
    //         /* code */
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;

    // }

    // int row, col;

    // for (row = 1; row <= 5; row=row+1)
    // {
    //     /* code */
    //     // char name ='a' + row -1;
    //     for (col = 1; col<= row; col=col+1)
    //     {
    //         /* code */
    //         char name ='a' + row -1;
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;

    // }

    // int row, col;

    // for (row = 1; row <= 5; row=row+1)
    // {
    //     /* code */
    //     for (col = 1; col <= 5-(row-1); col=col+1)
    //     {
    //         /* code */
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // int row, col;

    // for (row = 5; row >= 1; row=row-1)
    // {
    //     /* code */
    //     for (col = 1; col <= row; col=col+1)
    //     {
    //         /* code */
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int row, col;

    // for (row = 1; row <= 5; row=row+1)
    // {
    //     /* code */
    //     for (col = 1;col <= 5-(row-1) ; col=col+1)
    //     {
    //         /* code */
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // int row, col;

    // for (row = 5; row >= 1; row=row-1)
    // {
    //     /* code */
    //     for (col = 1;col <= row ; col=col+1)
    //     {
    //         /* code */
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    int row, col;

    for (row = 1; row <= 5; row = row + 1)
    {
        /* code */
        for (col = 5; col >= 5 - row + 1; col = col - 1)
        {
            /* code */
            cout << col << " ";
        }
        cout << endl;
    }
}
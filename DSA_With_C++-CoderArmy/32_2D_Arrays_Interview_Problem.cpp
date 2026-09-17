#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// void wave (int arr[][4], int row, int col)
// {
//     for(int j=0; j<col;j++)
//     {
//         //
//         if(j%2==0)
//         {
//             for(int i=0; i<row;i++)
//             cout<<arr[i][j]<<" ";
//         }
//         else 
//         {
//             for(int i=row-1; i>=0; i--)
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }


// int main() 
// {
//     // // create 2d vector
//     // int n,m;
//     // cout<<"Enter rows and cols: ";
//     // cin>>n>>m;
//     // vector<vector<int> >matrix(n,vector<int>(m,1));

//     // // for(int i=0; i<3; i++)
//     // // for(int j=0; j<4; j++)
//     // // cout<<matrix[i][j]<<" ";

//     // // cout<<"Rows = "<<matrix.size();
//     // // cout<<endl;
//     // // cout<<"Cols = "<<matrix[0].size();

//     // for(int i=0; i<n; i++)
//     // for(int j=0; j<m; j++)
//     // cin>>matrix[i][j];

//     // for(int i=0; i<n; i++)
//     // {
//     //     for(int j=0; j<m;j++)
//     //     cout<<matrix[i][j]<<" ";
//     //     cout<<endl;
//     // }

//     int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};


//      // wave print
//     wave(arr1,3,4);
    
// }

// Homework

void reverseRows(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();

    for(int i=0; i<n; i++)
    // Swap left and right element in row i
        for(int j =0; j<m/2;j++) {
            swap(mat[i][j], mat[i][m-1-j]);
        }
        // Alternatively, use STL
        // reverse(mat[i].begin(), mat[i].end());
}


int main() {
    vector<vector<int>> mat = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    reverseRows(mat);

    // Print to verify
    for(const auto& row: mat) {
        for (int val:row) cout<<val<<" ";
        cout<<"\n";
    }
    return 0;
}
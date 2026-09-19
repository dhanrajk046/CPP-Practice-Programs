/*  Binary Search in a 2D array which is sorted in decreasing order. N is the number of rows and M is the number of columns.*/

#include<iostream>
#include<vector>
#include<utility>
using namespace std;



pair<int, int> searchMatrix(vector<vector<int>>& matrix, int target) {
    if(matrix.empty() || matrix[0].empty()) return {-1, -1};

    int n = matrix.size();
    int m = matrix[0].size();

    int low =0, high = n*m-1;
    
    while(low<=high) {
        int mid = low + (high - low)/2;
        int row = mid/m;
        int col = mid%m;
        int val = matrix[row][col];

        if(val == target) {
            return {row, col};
        } else if (val<target) {
            // Target is larger, search the left half (smaller indices)
            high = mid -1;
        } else {
            // Target is smaller, search the right half (larger indices)
            low = mid +1;
        }
    }

    return {-1, -1}; // Not found
}


int main() {
    // Globally sorted matrix in decreasing order:
    // [[20,18,16],
    // [14,12,10],
    // [8,6,4]]
    vector<vector<int>> matrix = {
        {20, 18, 16},
        {14, 12, 10},
        {8, 6, 4}
    };

    int target = 12;
    pair<int, int> result = searchMatrix(matrix, target);

    if(result.first != -1) 
    {
        cout<<"Found "<< target<<" at row "<<result.first<<", col "<< result.second<< endl;
    }
    else{
        cout<<target<<" not found in the matrix."<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void printSpiral(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            cout << matrix[top][i] << " ";
        }
        top++;
        
        for (int i = top; i <= bottom; ++i) {
            cout << matrix[i][right] << " ";
        }
        right--;
        
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    vector<vector<int>> matrix1 = {{1, 2, 3, 4},
                                   {5, 6, 7, 8},
                                   {9, 10, 11, 12},
                                   {13, 14, 15, 16}};
                                   
    vector<vector<int>> matrix2 = {{1, 2, 3, 4, 5, 6},
                                   {7, 8, 9, 10, 11, 12},
                                   {13, 14, 15, 16, 17, 18}};
    
    cout << "Spiral order of matrix1: ";
    printSpiral(matrix1);
    cout << endl;
    
    cout << "Spiral order of matrix2: ";
    printSpiral(matrix2);
    cout << endl;

    return 0;
}

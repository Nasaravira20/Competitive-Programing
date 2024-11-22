#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> mat = {{1, 0}, {0, 0}};
    int m = mat.size();
    int n = mat[0].size();
    
    vector<int> row(m, 0), col(n, 0);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] == 1 || col[j] == 1) {
                mat[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

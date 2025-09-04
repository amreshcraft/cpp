#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(const vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> res(col, vector<int>(row));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            res[j][i] = matrix[i][j];  // transpose
        }
    }
    return res;
}

int main() {
    int row, col;
    cin >> row >> col;

    vector<vector<int>> v(row, vector<int>(col));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> res = transpose(v);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

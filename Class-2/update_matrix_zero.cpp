#include<bits/stdc++.h>
using namespace std;

vector<vector<bool>> update_matrix(vector<vector<bool>> arr) {

    int n = arr.size();
    int m = arr[0].size();

    bool row_flag = false, col_flag = false;
    for (int j = 0; j < m; j++) {
        if (arr[0][j] == 0) {
            row_flag = true;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i][0] == 0) {
            col_flag = true;
            break;
        }
    }

    // Updating the buckets for the internal matrix.
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][j] == 0) {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    // Update the values in the internal matrix depending upon their corresponding buckets.
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][0] == 0 or arr[0][j] == 0) {
                arr[i][j] = 0;
            }
        }
    }

    if (row_flag) {
        for (int j = 0; j < m; j++) {
            arr[0][j] = 0;
        }
    }
    if (col_flag) {
        for (int i = 0; i < n; i++) {
            arr[i][0] = 0;
        }
    }

    return arr;
}

int main() {

    vector<vector<bool>> res = update_matrix({{1, 0, 1},
                                              {1, 1, 1},
                                              {1, 1, 1}});
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    res = update_matrix({{1, 0, 1},
                         {1, 1, 1},
                         {1, 0, 1}});
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
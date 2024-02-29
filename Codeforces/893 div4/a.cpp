#include <iostream>
#include <vector>
using namespace std;

bool help( vector<string>& mat, int col, char ch) {
    for (int i = 0; i < mat.size(); ++i) {
        if (mat[i][col] == ch) {
            return true;
        }
    }
    return false;
}

bool ck( vector<string>& mat) {
    for (int vCol = 0; vCol < mat[0].size(); ++vCol) {
        if (help(mat, vCol, 'v')) {
            for (int iCol = vCol + 1; iCol < mat[0].size(); ++iCol) {
                if (help(mat, iCol, 'i')) {
                    for (int kCol = iCol + 1; kCol < mat[0].size(); ++kCol) {
                        if (help(mat, kCol, 'k')) {
                            for (int aCol = kCol + 1; aCol < mat[0].size(); ++aCol) {
                                if (help(mat, aCol, 'a')) {
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<string> mat(n);
        for (int i = 0; i < n; ++i) {
            cin >> mat[i];
        }
        if (ck(mat)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}


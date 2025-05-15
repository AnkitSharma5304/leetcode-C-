// https://chatgpt.com/share/6715eece-57d8-800c-b035-6aeb5d3a26cb
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> result;
    int N;

    bool isvalid(vector<string> &board, int row, int col) {
        // Check upwards in the same column
        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Check diagonal upwards-left
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Check diagonal upwards-right
        for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void solve(vector<string> &board, int row) {
        if (row >= N) {
            result.push_back(board);
            return ;
        }

        for (int col = 0; col < N; col++) {
            if (isvalid(board, row, col)) {
                board[row][col] = 'Q';
                solve(board, row + 1);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        N = n;
        vector<string> board(n, string(n, '.')); // Initialize board with dots
        solve(board, 0);
        return result;
    }
};

int main() {
    int n;
    cout << "Enter the value of N (size of the chess board): ";
    cin >> n;

    Solution sol;
    vector<vector<string>> solutions = sol.solveNQueens(n);

    if (solutions.empty()) {
        cout << "No solutions found for N = " << n << endl;
    } else {
        cout << "Solutions for " << n << "-Queens problem:" << endl;
        for (const auto &solution : solutions) {
            for (const string &row : solution) {
                cout << row << endl;
            }
            cout << endl; // Separate different solutions
        }
    }

    return 0;
}

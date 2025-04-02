#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> m1, m2, m3;

        for (int i = 0; i < 9; i++) {
            m1.clear();
            m2.clear();

            for (int j = 0; j < 9; j++) {
                
                if (board[i][j] >= '1' && board[i][j] <= '9') {
                    if (m1.find(board[i][j]) != m1.end()) {
                        return false;
                    }
                    m1[board[i][j]]++;
                }

                
                if (board[j][i] >= '1' && board[j][i] <= '9') {
                    if (m2.find(board[j][i]) != m2.end()) {
                        return false;
                    }
                    m2[board[j][i]]++;
                }
            }
        }

        for (int x = 0; x < 9; x += 3) {
            for (int y = 0; y < 9; y += 3) {
                m3.clear();
                
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char num = board[x + i][y + j];

                        if (num >= '1' && num <= '9') {
                            if (m3.find(num) != m3.end()) {
                                return false;
                            }
                            m3[num]++;
                        }
                    }
                }
            }
        }

        return true;
    }
};

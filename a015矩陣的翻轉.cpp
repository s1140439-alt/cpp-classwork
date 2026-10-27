#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 提升輸入輸出效能
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int r, c;
    // 連續讀取直到 EOF
    while (cin >> r >> c) {
        // 宣告一個 R x C 的二維陣列（vector）
        vector<vector<int>> matrix(r, vector<int>(c));
        
        // 讀取矩陣資料
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }
        
        // 翻轉輸出：外層迴圈跑原本的行數 c，內層跑原本的列數 r
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                cout << matrix[i][j] << (i == r - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }
    return 0;
}

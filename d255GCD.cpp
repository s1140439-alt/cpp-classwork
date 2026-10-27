#include <iostream>
using namespace std;

int GCD(int, int); // 找最大公因數函數

int main() {
    int N, G;
    while(cin >> N && N != 0){
        G = 0;
        for (int i = 1; i < N; i++){
            for(int j = i+1; j <= N; j++){
                G = G + GCD(i, j);
            }
        }
        cout << G << "\n"; // 補上輸出結果與換行
    }
    return 0;
}

// 修正後的經典輾轉相除法 (避免除以 0 且更有效率)
int GCD(int i, int j) {
    while (j != 0) {
        int temp = i % j;
        i = j;
        j = temp;
    }
    return i;
}

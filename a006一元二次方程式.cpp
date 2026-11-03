#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        int d = b * b - 4 * a * c; // 計算判別式
        
        if (d > 0) {
            int root1 = (-b + sqrt(d)) / (2 * a);
            int root2 = (-b - sqrt(d)) / (2 * a);
            // 確保先輸出較大的根
            if (root1 < root2) swap(root1, root2);
            cout << "Two different roots x1=" << root1 << " , x2=" << root2 << endl;
        } 
        else if (d == 0) {
            int root = -b / (2 * a);
            cout << "Two same roots x=" << root << endl;
        } 
        else {
            cout << "No real root" << endl;
        }
    }
    return 0;
}

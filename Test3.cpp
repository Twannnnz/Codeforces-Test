#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 

    for (int i = 1; i <= n; i++) {
        // check hàng lẻ là output là N 
        if (i % 2 == 1) {
            for (int j = 1; j <= m; j++) {
                cout << 'N';
            }
        }
        else {
            // Check hàng chẵn mà chia cho 2 bằng một số lẻ có N ở cuối 
            if ((i / 2) % 2 == 1) {
                for (int j = 1; j < m; j++) cout << '.';
                cout << 'N';
            } else {
            // Check hàng chẵn mà chia cho 2 bằng môt số chẵn có N ở đầu 
                cout << 'N';
                for (int j = 2; j <= m; j++) cout << '.';
            }
        }
        // Xuống hàng 
        cout << endl; 
    }

    return 0;
}

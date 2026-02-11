#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout<< "Enter number of rows and columns: ";
    cin>> m >> n;

    int a[10][10];

    cout<< "Enter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin>> a[i][j];
        }
    }

    cout<< "\nRow-wise sum:\n";
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += a[i][j];
        }
        cout<< "Row " << i + 1 << " = " << rowSum << endl;
    }

    cout<< "\nColumn-wise sum:\n";
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += a[i][j];
        }
        cout<< "Column " << j + 1 << " = " << colSum << endl;
    }

    return 0;
}

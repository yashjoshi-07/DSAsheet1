#include <iostream>
using namespace std;

int main() {
    int n;
    int a[50];

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nEven numbers: ";
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }

    cout << "\nOdd numbers: ";
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}

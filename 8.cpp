#include <iostream>
using namespace std;

int main() {
    int n, pos, element;
    int a[50];

    cout << "Enter size if array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;

    cout << "Enter element to insert: ";
    cin >> element;

    for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = element;
    n++;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

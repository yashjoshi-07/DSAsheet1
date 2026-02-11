#include <iostream>
using namespace std;

int main() {
    int n, value;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter non-zero value to replace zeros: ";
    cin >> value;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            arr[i] = value;
        }
    }

    cout << "Updated array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter constant value: ";
    cin >> k;

    int greater = 0, less = 0, equal = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > k)
            greater++;
        else if (arr[i] < k)
            less++;
        else
            equal++;
    }

    cout << "Greater than " << k << " = " << greater << endl;
    cout << "Less than " << k << " = " << less << endl;
    cout << "Equal to " << k << " = " << equal << endl;

    return 0;
}

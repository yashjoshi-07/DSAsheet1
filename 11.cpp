#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return max(arr[n - 1], findMax(arr, n - 1));
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Largest element = " << findMax(arr, n);

    return 0;
}

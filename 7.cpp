#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout<<"enter size of array:";
    cin >> n;

    int arr[n];
    cout<<"enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Prime numbers: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            cout << arr[i] << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, pos;
    cout<<"enter size of array:";
    cin >> n;
    int arr[n];
    cout<<"enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> pos;

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

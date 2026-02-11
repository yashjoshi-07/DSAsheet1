#include <iostream>
using namespace std;
int main() {
    int n=5;
    int arr[n]= {10,20,30,40,50};

    int maxNum = arr[0];
    int minNum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
        if (arr[i] < minNum) {
            minNum = arr[i];
        } 
    }

    cout << "Maximum number = " << maxNum << endl;
    cout << "Minimum number = " << minNum << endl;

    return 0;
}

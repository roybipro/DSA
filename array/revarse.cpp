#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // Number of elements

    cout << "normal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    cout << "reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
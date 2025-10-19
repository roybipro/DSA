#include <iostream>
using namespace std;
void f(int i,int arr[],int n){
    if(i >= n / 2) return;
    //Swap
    int tmp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = tmp;
    f(i + 1, arr, n);
}
int main() {
    int n;
    if (!(cin >> n)) return 0;
    if (n <= 0) return 0;

    int *arr = new int[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    f(0, arr, n);

    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << '\n';

    delete[] arr;
    return 0;
}
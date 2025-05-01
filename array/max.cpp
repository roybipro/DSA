#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 2, 3, 23, 5, 7, 14, 54, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        // if (mx < arr[i])  mx = arr[i];
        mx = max(mx,arr[i]);
    }
    cout << mx;
    return 0;
}
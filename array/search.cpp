#include <iostream>
using namespace std;

int main()
{
    int s[] = {1, 3, 4, 34, 7, 2, 4};
    int n = sizeof(s) / sizeof(int);
    int x;
    cout << "Entr targrt=";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == x)
        {
            cout << "found at index " << i << " The number is=" << x;
            break;
        }
        else 
        cout<<"Not Found";
    }
    return 0;
}
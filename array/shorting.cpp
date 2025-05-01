#include <iostream>
using namespace std;

void sorting(int arr[], int size)
{
    int i, j, min_id;
    for (i = 0; i < size - 1; i++)
    {
        min_id = i;
        for (j = 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
            }
        }
    }
}

int main()
{
    int arr[] = {21,51,30,6,82,12,12,13,14,
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
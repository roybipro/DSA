// Selection Sort
#include <iostream>
using namespace std;
// Sorting Function
void selectionSort(int arr[], int n)
{
    int i, j, min_index;
    // one by one move boundry of
    // unsorted array
    /*/ for (i = 0; i < n - 1; i++)
     {
         // Find the minimum element in unsorted array
         min_index=i;
         for(j=i+1;j<n;j++){
             if(arr[j]<arr[min_index])
             min_index=j;

           }
           // Swap the found minimum element
         // with the first element
     if(min_index!=i)
     swap(arr[min_index],arr[i]);
     }
     */
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            // Swap the found minimum element
            // with the first element
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}

// Driver program
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}

#include <iostream>
using namespace std;

int partition(int arr[], int si, int ei)
{
    // 6 2 5 7 4 8 9 +!
    int pivot = arr[si], count = 0;
    /*for (int i = 0; i <= ei; i++)
    {
        cout << arr[i] << " ";
    }*/
    for (int i = si + 1; i <= ei; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivitpos = si + count;
    int tmp = arr[si];
    arr[si] = arr[pivitpos];
    arr[pivitpos] = tmp;

    for (int i = 0; i <= ei; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int i = si, j = ei;
    while (i < pivitpos && j > pivitpos)
    {
        if (arr[i] <= arr[pivitpos])
        {
            i++;
        }
        else if (arr[j] > arr[pivitpos])
        {
            j--;
        }
        else
        {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    return pivitpos;
}
void quick_sort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    int mid = partition(arr, si, ei);

    quick_sort(arr, si, mid - 1);
    quick_sort(arr, mid + 1, ei);
}
int main()
{
    int arr[10] = {4, 3, 2, 5, 1, 8, 56, 32, 99, 22};
    int n = 10;
    cout << "Original : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quick_sort(arr, 0, n - 1);

    cout << "Final : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
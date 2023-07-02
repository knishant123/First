#include <iostream>
using namespace std;

void merge(int *arr, int si, int ei)
{
    int mid = si + (ei - si) / 2;
    int len1 = mid - si + 1;
    int len2 = ei - mid;

    // create 2 arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // adding the left side values to first array
    int mainArray = si;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArray++];
    }

    // adding the left side values to first array
    mainArray = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArray++];
    }

    // adding values
    int index1 = 0;
    int index2 = 0;
    mainArray = si;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArray++] = first[index1++];
        }
        else
        {
            arr[mainArray++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArray++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArray++] = second[index2++];
    }

    delete first;
    delete second;
}
void merge_half(int *arr, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    int mid = si + (ei - si) / 2;
    merge_half(arr, si, mid);
    merge_half(arr, mid + 1, ei);
    merge(arr, si, ei);
}

int main()
{

    int arr[10] = {4, 3, 2, 5, 1, 8, 56, 32, 99, 22};
    int n = 10;
    merge_half(arr, 0, n - 1);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
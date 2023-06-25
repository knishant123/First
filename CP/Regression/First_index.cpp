#include <iostream>
using namespace std;

int first_index(int arr[], int n, int x)
{
    if (n == -1)
    {
        return 0;
    }

    if (arr[0] == x)
    {
        return 0;
    }

    int small_cal = first_index(arr + 1, n - 1, x);
    if (small_cal == -1)
    {
        return small_cal;
    }
    else
    {
        return small_cal + 1;
    }
}

int main()
{
    int x, n;
    cout << "Enter length of array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number for the 1st index : ";
    cin >> x;

    int index = first_index(arr, n, x);
    if (index == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found at : " << index << "st index \n";
    }
}
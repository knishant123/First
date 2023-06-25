#include <iostream>
using namespace std;

int last_index(int arr[], int n, int x)
{
    if (n == -1)
    {
        return -1;
    }

    int small_cal = last_index(arr + 1, n - 1, x);
    if (small_cal == -1)
    {
        if (arr[0] == x)
        {
            small_cal = small_cal + 1;
            return small_cal;
        }
    }
    else
    {
        return small_cal + 1;
    }
    return small_cal;
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

    int index = last_index(arr, n, x);
    if (index == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found at : " << index << "st index \n";
    }
}
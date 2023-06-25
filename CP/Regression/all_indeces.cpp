#include <iostream>
using namespace std;

int all_index(int arr[], int n, int x, int out[])
{
    if (n == 0)
    {
        return 0;
    }

    int small_cal = all_index(arr, n - 1, x, out);

    if (arr[n - 1] == x)
    {
        out[small_cal++] = n - 1;
    }
    return small_cal;
}
int ouut(int arr[], int n, int x)
{
    int out[n];
    int c = all_index(arr, n, x, out);
    // cout << "No of indies : " << c;
    if (c == 0)
    {
        cout << "-1";
    }
    for (int i = 0; i < c; i++)
    {
        cout << out[i] << " ";
    }
    return 0;
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
    // int arr[] = {9, 8, 10, 8, 8}, x = 8;
    cout << "Enter number for the index : ";
    cin >> x;
    // int n = sizeof(arr) / sizeof(arr[0]);
    ouut(arr, n, x);
}
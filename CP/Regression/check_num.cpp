#include <iostream>
using namespace std;

bool count_num(int arr[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == x)
    {
        return true;
    }

    bool small_ans = count_num(arr + 1, n - 1, x);
    return small_ans;
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

    cout << "Enter number to be found : ";
    cin >> x;

    count_num(arr, n, x) ? cout << "True" : cout << "False";
}
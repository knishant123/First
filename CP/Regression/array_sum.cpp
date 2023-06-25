#include <iostream>
using namespace std;

int arr_sum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int small_ans = arr[0] + arr_sum(arr + 1, n - 1);
    return small_ans;
}
int main()
{
    int arr[] = {4, 2, 43, 5, 8};

    cout << arr_sum(arr, 5);
}
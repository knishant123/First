#include <iostream>
using namespace std;

int fibb(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        // cout << n << " ";
        return 1;
    }

    int small_ans1 = fibb(n - 1) + fibb(n - 2);
    // cout << small_ans1 << " ";
    return small_ans1;
}
int main()
{
    int n;
    cin >> n;
    fibb(n);
    // cout << fibb(n) << " ";
}
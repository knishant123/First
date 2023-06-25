#include <iostream>
using namespace std;

int cal_power(int x, int n)
{

    if (n == 1)
    {
        return x;
    }

    int small_ans = x * cal_power(x, n - 1);
    return small_ans;
}
int main()
{
    int x, n;
    cout << "Enter x and n \n";
    cin >> x;
    cin >> n;
    cout << "power is " << cal_power(x, n) << "\n";
}

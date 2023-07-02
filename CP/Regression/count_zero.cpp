#include <iostream>
using namespace std;

int count_0(int a)
{
    if (a <= 9)
    {
        if (a == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int small_ans = count_0(a / 10);
    if (a % 10 == 0)
    {
        small_ans += 1;
    }
    return small_ans;
}
int main()
{
    int a;
    cin >> a;

    cout << count_0(a) << " ";
}
#include <iostream>
using namespace std;

int multi(int a, int b)
{
    if (b == 0 || a == 0)
    {
        return 0;
    }
    int small_ans = a + multi(a, b - 1);
    return small_ans;
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << multi(a, b) << " ";
}
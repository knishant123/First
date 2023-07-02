#include <iostream>
#include <math.h>
using namespace std;

double count_0(int a)
{
    if (a == 0)
    {
        return 1;
    }

    double small_cal = (1 / pow(2, a)) + count_0(a - 1);
    return small_cal;
}
int main()
{
    int a;
    cin >> a;

    cout << count_0(a) << " ";
}
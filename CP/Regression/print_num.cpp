#include <iostream>
using namespace std;

int num(int n)
{

    if (n == 1)
    {
        return n;
    }

    int small_ans = num(n - 1);
    cout << small_ans << " ";
    return n;
}
int main()
{
    int n;
    cout << "Enter n \n";
    cin >> n;
    cout << num(n) << " ";
}
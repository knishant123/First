#include <iostream>
using namespace std;

void remove_x(char a[])
{
    if (a[0] == '\0')
    {
        return;
    }

    if (a[0] == 'x')
    {
        int i = 1;
        for (; a[i] != '\0'; i++)
        {
            a[i - 1] = a[i];
        }
        a[i - 1] = a[i];
        remove_x(a);
    }
    else
    {
        remove_x(a + 1);
    }
}

int main()
{

    char a[40];
    cin >> a;

    cout << "\n";
    cout << a << "\n";
    remove_x(a);
    cout << a;
}
#include <iostream>
using namespace std;
void remove_dup(char a[])
{
    if (a[0] == '\0')
    {
        return;
    }

    if (a[0] == a[1])
    {
        int i = 1;
        for (; a[i] != '\0'; i++)
        {
            a[i - 1] = a[i];
        }
        a[i - 1] = a[i];
        remove_dup(a);
    }
    else
    {
        remove_dup(a + 1);
    }
}

int main()
{
    char a[40];
    cin >> a;

    remove_dup(a);
    cout << "\n";
    cout << a;
}

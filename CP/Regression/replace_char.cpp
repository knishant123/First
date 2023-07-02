#include <iostream>
using namespace std;

void replace_char(char a[], char rep, char with)
{
    if (a[0] == '\0')
    {
        return;
    }

    if (a[0] == rep)
    {
        a[0] = with;
    }
    replace_char(a + 1, rep, with);
}
int main()
{

    char a[40], c1, c2;
    cin >> a;
    cin >> c1 >> c2;

    replace_char(a, c1, c2);
    cout << "\n";
    cout << a;
}
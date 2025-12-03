#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int a[] = {1, 0, 1, 0};
    int n = sizeof(a) / sizeof(a[0]);

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[k++] = a[i];
        }
    }

    while (k < n)
    {
        a[k++] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<' ';
    }
}
#include <iostream>
using namespace std;

int fun(int n)
{
    if (!n <= 1 && n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << "  ";
            }
            for (int j = 0; j <= n - i - 1; j++)
            {
                cout << "  ";
            }
            for (int k = 0; k < 2 * i - 1; k++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << "  ";
            }
            for (int j = 0; j <= n; j++)
            {
                if (j == n - 1)
                {
                    cout << "e ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        for (int i = 0; i < n - (n / 2 + 1); i++)
        {
            cout << " ";
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << "  ";
        }
        for (int i = 0; i <= n + 1; i++)
        {
            cout << "* ";
        }
        cout << endl;

        for (int i = 0; i < n + 1; i++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << "  ";
            }
            for (int j = 0; j < n - n; j++)
            {
                cout << "  ";
            }
            cout << "e";

            for (int j = 0; j < 2 * n - 3; j++)
            {
                cout << "  ";
            }
            cout << "e" << endl;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        for (int m = 1; m <= 2 * (n - i); m++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}
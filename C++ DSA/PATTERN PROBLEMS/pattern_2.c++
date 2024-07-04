#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    int sq = n * n;

    while (i <= sq)
    {
        cout << i << " ";
        if (i % n == 0)
        {
            cout << endl;
        }
        i = i + 1;
    }

    cout << "PRINTING TRIANGULAR PATTERN" << endl;
    int q;
    cin >> q;
    int w = 1;
    while (w <= q)
    {
        int j = 1;
        while (j <= w)
        {
            cout << w;
            j = j + 1;
        }
        cout << endl;
        w = w + 1;
    }

    cout << "ANOTHER PaTTERn " << endl;
    int r;
    cin >> r;
    int c = 1;
    while (c <= r)
    {
        int j = 1;
        int val = c;
        while (j <= c)
        {
            cout << val;
            val = val + 1;
            j = j + 1;
        }
        cout << endl;
        c = c + 1;
    }

}   
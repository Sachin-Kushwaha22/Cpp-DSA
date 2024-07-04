#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int n,b;
    cin >> n;
    cin >> b;
    for (int i = n; i <= b; i++)
    {
        if (n == 1)
        {
            cout << "one" << endl;
            n=n+1;
        }
        else if (n == 2)
        {
            cout << "two" << endl;
            n=n+1;
        }
        else if (n == 3)
        {
            cout << "three" << endl;
            n=n+1;
        }
        else if (n == 4)
        {
            cout << "four" << endl;
            n=n+1;
        }
        else if (n == 5)
        {
            cout << "five" << endl;
            n=n+1;
        }
        else if (n == 6)
        {
            cout << "six" << endl;
            n=n+1;
        }
        else if (n == 7)
        {
            cout << "seven" << endl;
            n=n+1;
        }
        else if (n == 8)
        {
            cout << "eight" << endl;
            n=n+1;
        }
        else if (n == 9)
        {
            cout << "nine" << endl;
            n=n+1;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << "even" << endl;
                n=n+1;
            }
            else
            {
                cout << "odd" << endl;
                n=n+1;
            }
        }
    }
    return 0;
}
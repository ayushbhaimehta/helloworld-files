#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int D, d, a, b, c, result = 0;
        cin >> D >> d >> a >> b >> c;
        if (d * D < 10)
        {
            cout << result << endl;
        }
        else if (d * D >= 10 && d * D < 21)
        {
            result += a;
            cout << result << endl;
        }
        else if (d * D >= 21 && d * D < 42)
        {
            result += b;
            cout << result << endl;
        }
        else if (d * D >= 42)
        {
            result += c;
            cout << result << endl;
        }
    }

    return 0;
}
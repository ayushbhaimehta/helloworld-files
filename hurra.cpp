#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        int ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i <= x2; i++)
        {
            ans += (i * (i + 1)) / 2 - (i * (i - 1)) / 2 + (i + y1 - 1) * (i + y1 - 2) / 2;
        }
        for (int i = y1; i <= y2; i++)
        {
            ans += ((x2 * (x2 + 1)) + (x2 + i - 1) * (x2 + i - 2) - (x2 * (x2 - 1))) / 2;
        }

        ans -= ((x2 * (x2 + 1)) - (x2 * (x2 - 1)) + (x2 + y1 - 1) * (x2 + y1 - 2)) / 2;

        cout << ans << endl;
    }

    return 0;
}
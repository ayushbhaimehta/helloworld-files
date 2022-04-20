#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, m, d;
        cin >> x >> m >> d;
        int ans;

        if (x * m > x + d)
        {
            ans = x + d;
        }
        else
        {
            ans = x * m;
        }
        cout << ans << endl;
    }
    return 0;
}
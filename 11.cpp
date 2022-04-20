#include <bits/stdc++.h>
using namespace std;

int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {

        long long int k;
        cin >> k;
        long long int x;
        long long int ans = 0;
        long long first = 0, second = 0;

        for (long long i = 1; i <= (2 * k) + 1; i++)
        {
            if (i == (2 * k) + 1)
                break;
            x = 0;
            first = second == 0 ? k + (i * i) : second;
            second = k + 1 + (i * i) + 2 * i;
            x += gcd(first, second);
            ans += x;
            // cout << x << "=x" << " " << ans << "=ans" << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
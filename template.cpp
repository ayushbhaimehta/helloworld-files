#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n, x, k;
        scanf("%lld %lld %lld", &n, &x, &k);
        long long int ans = n + 1;
        bool flag = 0;
        if (x % k == 0)
        {
            flag = 1;
        }
        else if (n + 1 - x % k == 0)
        {
            flag = 1;
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
